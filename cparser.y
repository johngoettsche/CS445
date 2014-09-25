/* This is a yacc-able parser for the entire ANSI C++ grammar with no unresolved conflicts. */
/* The parse is SYNTACTICALLY consistent and requires no template or type name assistance.
 * The grammar in the C++ standard notes that its grammar is a superset of the true
 * grammar requiring semantic constraints to resolve ambiguities. This grammar is a really big
 * superset unifying expressions and declarations, eliminating the type/non-type distinction,
 * and iterating to find a consistent solution to the template/arith,metoic < ambiguity.
 * As a result the grammar is much simpler, but requires the missing semantic constraints to be
 * performed in a subsequent semantic pass, which is of course where they belong. This grammar will
 * support conversion of C++ tokens into an Abstract Syntax Tree. A lot of further work is required to
 * make that tree useful. 
 *
 *  Author:         E.D.Willink             Ed.Willink@rrl.co.uk
 *  Date:           19-Nov-1999
 */
/*
 * The lexer (and/or a preprocessor) is expected to identify the following
 *
 *  Punctuation:
 */
 %{
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "errors.h"
#include "token.h"
#include "120parse.h"
#include "parsedef.h"

struct TreeNode * alacnary(int, int, int,...);

extern int line_num;
int suppress_parse_error = 0;

%}

%union{
	struct Token *t;
	struct TreeNode *n;
};

%token <t> PLUS MINUS MUL DIV MOD ER AND OR NOT BANG LT GT ASN COLON LB RB LC RC LP RP
%token <t> QUEST DOT AT DOLLAR SM CM
%token <t> POUND

//%type <keyword> '+' '-' '*' '/' '%' '^' '&' '|' '~' '!' '<'  '>' '=' ':' '[' ']' '{' '}' '(' ')'
//%type <keyword> '?' '.' '\'' '\"' '\\' '@' '$' ';' ','

// NOT USED: '\'' '\"' '\\' 
// DOES NOT APPEAR LATER: '\'' '\"' '\\' '@' '$'

/*
 *  Punctuation sequences
 */
 %token <t> ARROW ARROW_STAR DEC EQ GE INC LE LOG_AND LOG_OR NE SHL SHR
 %token <t> ASS_ADD ASS_AND ASS_DIV ASS_MOD ASS_MUL ASS_OR ASS_SHL ASS_SHR ASS_SUB ASS_XOR
 %token <t> DOT_STAR ELLIPSIS SCOPE
 
//%term <keyword> ARROW ARROW_STAR DEC EQ GE INC LE LOG_AND LOG_OR NE SHL SHR
//%term <keyword> ASS_ADD ASS_AND ASS_DIV ASS_MOD ASS_MUL ASS_OR ASS_SHL ASS_SHR ASS_SUB ASS_XOR
//%term <keyword> DOT_STAR ELLIPSIS SCOPE

/*
 *  Reserved words
 */
 %token <t> PRIVATE PROTECTED PUBLIC
 %token <t> BOOL CHAR DOUBLE FLOAT INT LONG SHORT SIGNED UNSIGNED VOID WCHAR_T
 %token <t> CLASS ENUM NAMESPACE STRUCT TYPENAME UNION
 %token <t> CONST VOLATILE
 %token <t> AUTO EXPLICIT EXPORT EXTERN FRIEND INLINE MUTABLE REGISTER STATIC TEMPLATE TYPEDEF USING VIRTUAL
 %token <t> ASM BREAK CASE CATCH CONST_CAST CONTINUE DEFAULT DELETE DO DYNAMIC_CAST
 %token <t> ELSE FALSE FOR GOTO IF NEW OPERATOR REINTERPRET_CAST RETURN
 %token <t> SIZEOF STATIC_CAST SWITCH THIS THROW TRUE TRY TYPEID WHILE
 
 
 // NED TO ADD THE FOLLOWING:
 %token <t> PDEFINE
 
//%term <access_specifier> PRIVATE PROTECTED PUBLIC
//%term <built_in_id> BOOL CHAR DOUBLE FLOAT INT LONG SHORT SIGNED UNSIGNED VOID WCHAR_T
//%term <class_key> CLASS ENUM NAMESPACE STRUCT TYPENAME UNION
//%term <cv_qualifiers> CONST VOLATILE
//%term <decl_specifier_id> AUTO EXPLICIT EXPORT EXTERN FRIEND INLINE MUTABLE REGISTER STATIC TEMPLATE TYPEDEF USING VIRTUAL
//%term <keyword> ASM BREAK CASE CATCH CONST_CAST CONTINUE DEFAULT DELETE DO DYNAMIC_CAST
//%term <keyword> ELSE FALSE FOR GOTO IF NEW OPERATOR REINTERPRET_CAST RETURN
//%term <keyword> SIZEOF STATIC_CAST SWITCH THIS THROW TRUE TRY TYPEID WHILE
/*
 *  Parametric values.
 */
 
 %token <t> CCON FCON IDENT ICON STRING
 
//%term <character_literal> CharacterLiteral
//%term <floating_literal> FloatingLiteral
//%term <identifier> Identifier
//%term <integer_literal> IntegerLiteral
//%term <number_literal> NumberLiteral  ** NOT USED LATER **
//%term <string_literal> StringLiteral

%type <n> identifier id template_test global_scope id_scope nested_id scoped_id destructor_id special_function_id nested_special_function_id 
%type <n> scoped_special_function_id declarator_id built_in_type_id pseudo_destructor_id nested_pseudo_destructor_id scoped_pseudo_destructor_id
%type <n> string literal boolean_literal translation_unit primary_expression abstract_expression type1_parameters mark_type1
%type <n> postfix_expression expression_list.opt expression_list unary_expression delete_expression new_expression new_type_id
%type <n> new_declarator direct_new_declarator new_initializer.opt cast_expression pm_expression multiplicative_expression
%type <n> additive_expression shift_expression relational_expression equality_expression and_expression exclusive_or_expression
%type <n> inclusive_or_expression logical_and_expression logical_or_expression conditional_expression assignment_expression
%type <n> assignment_operator expression.opt expression constant_expression templated_relational_expression 
%type <n> templated_equality_expression templated_and_expression templated_exclusive_or_expression templated_inclusive_or_expression
%type <n> templated_logical_and_expression templated_logical_or_expression templated_conditional_expression templated_assignment_expression
%type <n> templated_expression templated_expression_list looping_statement looped_statement statement control_statement labeled_statement
%type <n> compound_statement statement_seq.opt selection_statement condition.opt condition iteration_statement for_init_statement
%type <n> jump_statement declaration_statement compound_declaration declaration_seq.opt looping_declaration looped_declaration
%type <n> declaration specialised_declaration block_declaration specialised_block_declaration simple_declaration 
%type <n> suffix_built_in_decl_specifier.raw suffix_built_in_decl_specifier suffix_named_decl_specifier suffix_named_decl_specifier.bi
%type <n> suffix_named_decl_specifiers suffix_named_decl_specifiers.sf suffix_decl_specified_ids suffix_decl_specified_scope
%type <n> decl_specifier_affix decl_specifier_suffix decl_specifier_prefix storage_class_specifier function_specifier
%type <n> type_specifier elaborate_type_specifier simple_type_specifier built_in_type_specifier elaborated_type_specifier
%type <n> elaborated_enum_specifier enum_specifier enumerator_clause enumerator_list_ecarb enumerator_definition_ecarb enumerator_definition_filler
%type <n> enumerator_list_head enumerator_list enumerator_definition enumerator namespace_definition namespace_alias_definition
%type <n> using_declaration using_directive asm_definition linkage_specification init_declarations init_declaration star_ptr_operator
%type <n> nested_ptr_operator ptr_operator ptr_operator_seq ptr_operator_seq.opt cv_qualifier_seq.opt cv_qualifier type_id
%type <n> abstract_declarator.opt direct_abstract_declarator.opt direct_abstract_declarator parenthesis_clause parameters_clause
%type <n> parameter_declaration_clause parameter_declaration_list abstract_pointer_declaration abstract_parameter_declaration
%type <n> special_parameter_declaration parameter_declaration templated_parameter_declaration templated_abstract_declaration
%type <n> function_definition func_definition ctor_definition constructor_head function_try_block function_block function_body
%type <n> initializer_clause braced_initializer initializer_list looping_initializer_clause looped_initializer_clause colon_mark
%type <n> elaborated_class_specifier class_specifier_head class_key class_specifier member_specification.opt looping_member_declaration
%type <n> looped_member_declaration member_declaration simple_member_declaration member_init_declarations member_init_declaration
%type <n> accessibility_specifier bit_field_declaration bit_field_width bit_field_init_declaration base_specifier_list base_specifier
%type <n> access_specifier conversion_function_id conversion_type_id ctor_initializer.opt ctor_initializer mem_initializer_list
%type <n> mem_initializer_list_head mem_initializer mem_initializer_id operator_function_id operator template_declaration template_parameter_clause
%type <n> template_parameter_list template_parameter simple_type_parameter templated_type_parameter template_id template_argument_list
%type <n> template_argument explicit_specialization try_block handler_seq handler exception_declaration throw_expression templated_throw_expression
%type <n> exception_specification type_id_list advance_search bang mark nest start_search start_search1 util

/*
 *  The lexer need not treat '0' as distinct from IntegerLiteral in the hope that pure-specifier can
 *  be distinguished, It isn't. Semantic rescue from = constant-expression is necessary.
 *
 *  The lexer is not required to distinguish template or type names, although a slight simplification to the
 *  grammar and elaboration of the action rules could make good use of template name information.
 *
 *  In return for not needing to use semantic information, the lexer must support back-tracking, which
 *  is easily achieved by a simple linear buffer, a reference implementation of which may be found in the
 *  accompanying CxxParsing.cxx. Back-tracking is used to support:
 *
 *  Binary search for a consistent parse of the template/arithmetic ambiguity.
 *      start_search() initialises the search
 *      advance_search() iterates the search
 *      end_search() cleans up after a search
 *      template_test() maintains context during a search
 *
 *  Lookahead to resolve the inheritance/anonymous bit-field similarity
 *      mark() saves the starting context
 *      unmark() pops it
 *      rewind_colon() restores the context and forces the missing :
 *
 *  Lookahead to resolve type 1 function parameter ambiguities
 *      mark_type1() potentially marks the starting position
 *      mark() marks the pre { position
 *      remark() rewinds to the starting position
 *      unmark() pops the starting position
 *
 *  Note that lookaheads may nest. 
 */

/*
 *  The parsing philosophy is unusual. The major ambiguities are resolved by creating a unified superset
 *  grammar rather than non-overlapping subgrammars. Thus the grammar for parameter-declaration covers an
 *  assignment-expression. Minor ambiguities whose resolution by supersetting would create more
 *  ambiguities are resolved the normal way with partitioned subgrammars.
 *  This eliminates the traditional expression/declaration and constructor/parenthesised declarator
 *  ambiguities at the syntactic level. A subsequent semantic level has to sort the problems out.
 *  The generality introduces four bogus ambiguities and defers the cast ambiguity for resolution
 *  once semantic information is available.
 *
 *  The C++ grammar comprises 558 rules and uses 894 states in yacc, with 0 unresolved conflicts.
 *  24 conflicts from 10 ambiguities are resolved by 8 %prec's, so that yacc and bison report 0 conflicts.
 *
 *  The ambiguities are:
 *  1) dangling else resolved to inner-most if
 *      1 conflict in 1 state on else
 *  2) < as start-template or less-than
 *      1 conflict in 2 states on <
 *  3) a :: b :: c resolved to favour a::b::c rather than a::b ::c or a ::b::c
 *      1 conflicts in 1 state for ::
 *  4) pointer operators maximised at end of conversion id/new in preference to binary operators
 *      2 conflicts in 4 states on * and &
 *  5a) (a)@b resolved to favour binary a@b rather than cast unary (a)(@b)
 *  5b) (a)(b) resolved to favour cast rather than call
 *      8 conflicts in 1 state for the 8 prefix operators: 6 unaries and ( and [.
 *  6) enum name { resolved to enum-specifier rather than function
 *      1 conflict in 1 state on {
 *  7) class name { resolved to class-specifier rather than function
 *      1 conflict in 1 state on {
 *  8) extern "C" resolved to linkage-specification rather than declaration
 *      1 conflict in 1 state on StringLiteral
 *  9) class X : forced to go through base-clause look-ahead
 *      1 conflict in 1 state on :
 *  10) id : forced to label_statement rather than constructor_head
 *      0 conflicts - but causes a double state for 2)
 *  of which
 *      1 is a fundamental C conflict - always correctly resolved
 *          can be removed - see the Java spec
 *      2, 3, 4 are fundamental C++ conflicts
 *          2 always consistently resolved by iteration
 *          3 always correctly resolved
 *          4 always correctly resolved
 *      5 is a result of not using type information - deferred for semantic repair
 *      6,7 are caused by parsing over-generous superset - always correctly resolved
 *      8 is caused by parsing over-generous superset - always correctly resolved
 *          can be removed at the expense of 7 rules and 5 states.
 *      9 is a look-ahead trick - always correctly resolved
 *          could be removed by marking one token sooner
 *      10 is caused by parsing over-generous superset - always correctly resolved
 *
 *  The hard problem of distinguishing
 *      class A { class B : C, D, E {           -- A::B privately inherits C, D and E
 *      class A { class B : C, D, E ;           -- C is width of anon bit-field
 *  is resolved by using a lookahead that assumes inheritance and rewinds for the bit-field.
 *
 *  The potential shift-reduce conflict on > is resolved by flattening part of the expression grammar
 *  to know when the next > is template end or arithmetic >.
 *
 *  The grammar is SYNTACTICALLY context-free with respect to type. No semantic assistance is required
 *  during syntactic analysis. However the cast ambiguity is deferred and must be recovered
 *  after syntactic analysis of a statement has completed. 
 *
 *  The grammar is SYNTACTICALLY context-free with respect to template-names. This is achieved by
 *  organising a binary search over all possible template/arithmetic ambiguities with respect to
 *  the enclosing statement. This is potentially exponentially inefficient but well-behaved in practice.
 *  Approximately 1% of statements trigger a search and approximately 1% of those are misparsed,
 *  requiring the semantic analysis to check and correct once template information is available.
 *  1.5 parse attempts are required on average per ambiguous statement.
 *
 *  The grammar supports type I function declarations at severe impediment to efficiency. A lookahead
 *  has to be performed after almost every non-statement close parenthesis. A one-line plus corollary
 *  change to postfix_expression is commented and strongly recommended to make this grammar as
 *  efficient as the rather large number of reduction levels permits.
 *
 *  Error recovery occurs mostly at the statement/declaration level. Recovery also occurs at
 *  the list-element level where this poses no hazard to statement/declaration level recovery. 
 *  Note that since error propagation interacts with the lookaheads for template iteration or
 *  type 1 function arguments, introduction of finer grained error recovery may repair a false
 *  parse and so cause a misparse.
 *
 *  The following syntactic analysis errors occur, but are correctable semantically:
 *  (cast)unary-op expr         is parsed as (parenthesised)binary-op expr
 *      The semantic test should look for a binary/call with a (type) as its left child.
 *  (parenthesised)(arguments)  is parsed as (cast)(parenthesised)
 *      The semantic test should look for a cast with a non-type as its left child.
 *  template < and arithmetic < may be cross-parsed (unless semnatic help is provided)
 *      approximately 0.01% are misparsed, and must be sorted out - not easy.
 *
 *  The syntactic analysis defers the following ambiguities for semantic resolution:
 *  declaration/expression is parsed as a unified concept
 *      Use type and context to complete the parse.
 *  ~class-name                 is parsed as unary~ name
 *      The semantic test should look for ~ with a type as its child.
 *  delete[] expr               is parsed as delete []expr
 *      The semantic test should look for delete with a [] cast of its child.
 *  operator new/delete[]       are parsed as array of operator new/delete
 *      The semantic test should look for array of operator new/delete
 *      or activate the two extra commented rules in operator
 *  template of an explicit_instantiation is buried deep in the tree
 *      dig it out 
 *  pure-specifier and constant-initializer are covered by assignment-expression
 *      just another of the deferred declaration/expression ambiguities
 *  sizeof and typeid don't distinguish type/value syntaxes
 *      probably makes life polymorphically easier
 */
%nonassoc SHIFT_THERE
%nonassoc SCOPE ELSE INC DEC PLUS MINUS MUL AND LB LC LT COLON STRING
%nonassoc REDUCE_HERE_MOSTLY
%nonassoc LP
/*%nonassoc REDUCE_HERE */

%start translation_unit
%%

/*
 *  The %prec resolves the 14.2-3 ambiguity:
 *  Identifier '<' is forced to go through the is-it-a-template-name test
 *  All names absorb TEMPLATE with the name, so that no template_test is performed for them.
 *  This requires all potential declarations within an expression to perpetuate this policy
 *  and thereby guarantee the ultimate coverage of explicit_instantiation.
 *
 *  The %prec also resolves a conflict in identifier : which is forced to be a shift of a label for
 *  a labeled-statement rather than a reduction for the name of a bit-field or generalised constructor.
 *  This is pretty dubious syntactically but correct for all semantic possibilities.
 *  The shift is only activated when the ambiguity exists at the start of a statement. In this context
 *  a bit-field declaration or constructor definition are not allowed.
 */
identifier:                         
	IDENT																			{ $$ = alacnary(S_IDENTIFIER, IDENTIFIERr1, 0, $1); }
;
id:                                 
	identifier                      										{ $$ = alacnary(S_ID, IDr1, 1, $1); }    /*%prec SHIFT_THERE       /* Force < through test */
	| identifier template_test PLUS template_argument_list GT	{ $$ = alacnary(S_ID, IDr2, 5, $1, $2, $3, $4, $5); }
   | identifier template_test MINUS                            { $$ = alacnary(S_ID, IDr3, 3, $1, $2, $3); }   /* requeued < follows */
   | template_id 																{ $$ = alacnary(S_ID, IDr4, 1, $1); }
;	
template_test:                      
	LT             /* Queue '+' or '-' < as follow on */        { /*template_test();*/ }
;	
global_scope:                       
	SCOPE																			{ $$ = alacnary(S_GLOBAL_SCOPE, GLOBAL_SCOPEr1, 1, $1); }
   | TEMPLATE global_scope													{ $$ = alacnary(S_GLOBAL_SCOPE, GLOBAL_SCOPEr2, 2, $1, $2); }
;	
id_scope:                           
	id SCOPE																		{ $$ = alacnary(S_ID_SCOPE, ID_SCOPEr1, 2, $1, $2); }
;
/*
 *  A :: B :: C; is ambiguous How much is type and how much name ?
 *  The %prec maximises the (type) length which is the 7.1-2 semantic constraint.
 */
nested_id:                          
	id                            										{ $$ = alacnary(S_NESTED_ID, NESTED_IDr1, 1, $1); }/*%prec SHIFT_THERE       /* Maximise length */
   | id_scope nested_id														{ $$ = alacnary(S_NESTED_ID, NESTED_IDr2, 2, $1, $2); }
;
scoped_id:                          
	nested_id																	{ $$ = alacnary(S_SCOPED_ID, SCOPED_IDr1, 1, $1); }
   | global_scope nested_id												{ $$ = alacnary(S_SCOPED_ID, SCOPED_IDr2, 2, $1, $2); }
;
/*
 *  destructor_id has to be held back to avoid a conflict with a one's complement as per 5.3.1-9,
 *  It gets put back only when scoped or in a declarator_id, which is only used as an explicit member name.
 *  Declarations of an unscoped destructor are always parsed as a one's complement.
 */
destructor_id:                      
	NOT id																		{ $$ = alacnary(S_DESTRUCTOR_ID, DESTRUCTOR_IDr1, 2, $1, $2); }
   | TEMPLATE destructor_id												{ $$ = alacnary(S_DESTRUCTOR_ID, DESTRUCTOR_IDr2, 2, $1, $2); }
;
special_function_id:                
	conversion_function_id													{ $$ = alacnary(S_SPECIAL_FUNCTION_ID, SPECIAL_FUNCTION_IDr1, 1, $1); }
   | operator_function_id													{ $$ = alacnary(S_SPECIAL_FUNCTION_ID, SPECIAL_FUNCTION_IDr2, 1, $1); }
   | TEMPLATE special_function_id										{ $$ = alacnary(S_SPECIAL_FUNCTION_ID, SPECIAL_FUNCTION_IDr3, 2, $1, $2); }
;	
nested_special_function_id:         
	special_function_id														{ $$ = alacnary(S_NESTED_SPECIAL_FUNCTION_ID, NESTED_SPECIAL_FUNCTION_IDr1, 1, $1); }
   | id_scope destructor_id												{ $$ = alacnary(S_NESTED_SPECIAL_FUNCTION_ID, NESTED_SPECIAL_FUNCTION_IDr2, 2, $1, $2); }
   | id_scope nested_special_function_id								{ $$ = alacnary(S_NESTED_SPECIAL_FUNCTION_ID, NESTED_SPECIAL_FUNCTION_IDr3, 2, $1, $2); }
;	
scoped_special_function_id:         
	nested_special_function_id												{ $$ = alacnary(S_SCOPED_SPECIAL_FUNCTION_ID, SCOPED_SPECIAL_FUNCTION_IDr1, 1, $1); }
   | global_scope nested_special_function_id							{ $$ = alacnary(S_SCOPED_SPECIAL_FUNCTION_ID, SCOPED_SPECIAL_FUNCTION_IDr2, 2, $1, $2); }
;
/* declarator-id is all names in all scopes, except reserved words */
declarator_id:                      
	scoped_id																	{ $$ = alacnary(S_DECLARATOR_ID, DECLARATOR_IDr1, 1, $1); }
   | scoped_special_function_id											{ $$ = alacnary(S_DECLARATOR_ID, DECLARATOR_IDr2, 1, $1); }
   | destructor_id															{ $$ = alacnary(S_DECLARATOR_ID, DECLARATOR_IDr3, 1, $1); }
;
/*  The standard defines pseudo-destructors in terms of type-name, which is class/enum/typedef, of which
 *  class-name is covered by a normal destructor. pseudo-destructors are supposed to support ~int() in
 *  templates, so the grammar here covers built-in names. Other names are covered by the lack of
 *  identifier/type discrimination.
 */
built_in_type_id:                   
	built_in_type_specifier													{ $$ = alacnary(S_BUILT_IN_TYPE_ID, BUILT_IN_TYPE_IDr1, 1, $1); }
   | built_in_type_id built_in_type_specifier						{ $$ = alacnary(S_BUILT_IN_TYPE_ID, BUILT_IN_TYPE_IDr2, 2, $1, $2); }
;	
pseudo_destructor_id:               
	built_in_type_id SCOPE NOT built_in_type_id						{ $$ = alacnary(S_PSEUDO_DESTRUCTOR_ID, PSEUDO_DESTRUCTOR_IDr1, 4, $1, $2, $3, $4); }
   | NOT built_in_type_id													{ $$ = alacnary(S_PSEUDO_DESTRUCTOR_ID, PSEUDO_DESTRUCTOR_IDr2, 2, $1, $2); }
   | TEMPLATE pseudo_destructor_id										{ $$ = alacnary(S_PSEUDO_DESTRUCTOR_ID, PSEUDO_DESTRUCTOR_IDr3, 2, $1, $2); }
;	
nested_pseudo_destructor_id:        
	pseudo_destructor_id														{ $$ = alacnary(S_NESTED_PSEUDO_DESTRUCTOR_ID, NESTED_PSEUDO_DESTRUCTOR_IDr1, 1, $1); }
   | id_scope nested_pseudo_destructor_id								{ $$ = alacnary(S_NESTED_PSEUDO_DESTRUCTOR_ID, NESTED_PSEUDO_DESTRUCTOR_IDr2, 2, $1, $2); }
;	
scoped_pseudo_destructor_id:        
	nested_pseudo_destructor_id											{ $$ = alacnary(S_SCOPED_PSEUDO_DESTRUCTOR_ID, SCOPED_PSEUDO_DESTRUCTOR_IDr1, 1, $1); }
   | global_scope scoped_pseudo_destructor_id						{ $$ = alacnary(S_SCOPED_PSEUDO_DESTRUCTOR_ID, SCOPED_PSEUDO_DESTRUCTOR_IDr2, 2, $1, $2); }
;
/*---------------------------------------------------------------------------------------------------
 * A.2 Lexical conventions
 *---------------------------------------------------------------------------------------------------*/
/*
 *  String concatenation is a phase 6, not phase 7 activity so does not really belong in the grammar.
 *  However it may be convenient to have it here to make this grammar fully functional.
 *  Unfortunately it introduces a conflict with the generalised parsing of extern "C" which
 *  is correctly resolved to maximise the string length as the token source should do anyway.
 */
string:                             
	STRING																		{ $$ = alacnary(S_STRING, STRINGr1, 1, $1); }
;
literal:                            
	ICON																			{ $$ = alacnary(S_LITERAL, LITERALr1, 1, $1); }
   | CCON																		{ $$ = alacnary(S_LITERAL, LITERALr2, 1, $1); }
   | FCON																		{ $$ = alacnary(S_LITERAL, LITERALr3, 1, $1); }
   | string																		{ $$ = alacnary(S_LITERAL, LITERALr4, 1, $1); }
   | boolean_literal															{ $$ = alacnary(S_LITERAL, LITERALr5, 1, $1); }
;	
boolean_literal:                    
	FALSE																			{ $$ = alacnary(S_BOOLEAN_LITERAL, BOOLEAN_LITERALr1, 1, $1); }
   | TRUE																		{ $$ = alacnary(S_BOOLEAN_LITERAL, BOOLEAN_LITERALr2, 1, $1); }
;
/*---------------------------------------------------------------------------------------------------
 * A.3 Basic concepts
 *---------------------------------------------------------------------------------------------------*/
translation_unit:                   
	declaration_seq.opt														{ $$ = alacnary(S_TRANSLATION_UNIT, TRANSLATION_UNITr1, 1, $1); }
;
/*---------------------------------------------------------------------------------------------------
 * A.4 Expressions
 *---------------------------------------------------------------------------------------------------
 *  primary_expression covers an arbitrary sequence of all names with the exception of an unscoped destructor,
 *  which is parsed as its unary expression which is the correct disambiguation (when ambiguous).
 *  This eliminates the traditional A(B) meaning A B ambiguity, since we never have to tack an A onto
 *  the front of something that might start with (. The name length got maximised ab initio. The downside
 *  is that semantic interpretation must split the names up again.
 *
 *  Unification of the declaration and expression syntax means that unary and binary pointer declarator operators:
 *      int * * name
 *  are parsed as binary and unary arithmetic operators (int) * (*name). Since type information is not used
 *  ambiguities resulting from a cast
 *      (cast)*(value)
 *  are resolved to favour the binary rather than the cast unary to ease AST clean-up.
 *  The cast-call ambiguity must be resolved to the cast to ensure that (a)(b)c can be parsed.
 *
 *  The problem of the functional cast ambiguity
 *      name(arg)
 *  as call or declaration is avoided by maximising the name within the parsing kernel. So
 *  primary_id_expression picks up 
 *      extern long int const var = 5;
 *  as an assignment to the syntax parsed as "extern long int const var". The presence of two names is
 *  parsed so that "extern long into const" is distinguished from "var" considerably simplifying subsequent
 *  semantic resolution.
 *
 *  The generalised name is a concatenation of potential type-names (scoped identifiers or built-in sequences)
 *  plus optionally one of the special names such as an operator-function-id, conversion-function-id or
 *  destructor as the final name. 
 */
primary_expression:                 
	literal																		{ $$ = alacnary(S_PRIMARY_EXPRESSION, PRIMARY_EXPRESSIONr1, 1, $1); }
   | THIS																		{ $$ = alacnary(S_PRIMARY_EXPRESSION, PRIMARY_EXPRESSIONr2, 1, $1); }
   | suffix_decl_specified_ids											{ $$ = alacnary(S_PRIMARY_EXPRESSION, PRIMARY_EXPRESSIONr3, 1, $1); }
/* | SCOPE identifier                                            -- covered by suffix_decl_specified_ids */
/* | SCOPE operator_function_id                                  -- covered by suffix_decl_specified_ids */
/* | SCOPE qualified_id                                          -- covered by suffix_decl_specified_ids */
   | abstract_expression            									{ $$ = alacnary(S_PRIMARY_EXPRESSION, PRIMARY_EXPRESSIONr4, 1, $1); }
																					/*%prec REDUCE_HERE_MOSTLY  /* Prefer binary to unary ops, cast to call */
/* | id_expression                                               -- covered by suffix_decl_specified_ids */
;
/*
 *  Abstract-expression covers the () and [] of abstract-declarators.
 */
abstract_expression:                
	parenthesis_clause														{ $$ = alacnary(S_ABSTRACT_EXPRESSION, ABSTRACT_EXPRESSIONr1, 1, $1); }
   | LB expression.opt RB													{ $$ = alacnary(S_ABSTRACT_EXPRESSION, ABSTRACT_EXPRESSIONr2, 3, $1, $2, $3); }
   | TEMPLATE abstract_expression										{ $$ = alacnary(S_ABSTRACT_EXPRESSION, ABSTRACT_EXPRESSIONr3, 2, $1, $2); }
;
/*  Type I function parameters are ambiguous with respect to the generalised name, so we have to do a lookahead following
 *  any function-like parentheses. This unfortunately hits normal code, so kill the -- lines and add the ++ lines for efficiency.
 *  Supporting Type I code under the superset causes perhaps 25% of lookahead parsing. Sometimes complete class definitions
 *  get traversed since they are valid generalised type I parameters!
 */
type1_parameters:       
	/*----*/    parameter_declaration_list SM							{ $$ = alacnary(S_TYPE1_PARAMETERS, TYPE1_PARAMETERSr1, 2, $1, $2); }
   | /*----*/    type1_parameters parameter_declaration_list SM { $$ = alacnary(S_TYPE1_PARAMETERS, TYPE1_PARAMETERSr2, 3, $1, $2, $3); }
;	
mark_type1:                         
	/* empty */                                             { /*mark_type1(); yyclearin;*/ }
;	
postfix_expression:                 
	primary_expression
/* | /++++++/    postfix_expression parenthesis_clause */
   | /*----*/    postfix_expression parenthesis_clause mark_type1 MINUS	
																					{ $$ = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr1, 4, $1, $2, $3, $4); }
   | /*----*/    postfix_expression parenthesis_clause mark_type1 PLUS type1_parameters mark LC error 
     /*----*/                    { /*yyerrok; yyclearin; remark_type1(); unmark(); unmark(); */}
   | /*----*/    postfix_expression parenthesis_clause mark_type1 PLUS type1_parameters mark error 
     /*----*/                    { /*yyerrok; yyclearin; remark_type1(); unmark(); unmark();*/}
   | /*----*/    postfix_expression parenthesis_clause mark_type1 PLUS error
     /*----*/                    { /*yyerrok; yyclearin; remark_type1(); unmark(); */}
   | postfix_expression LB expression.opt RB							{ $$ = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr2, 4, $1, $2, $3, $4); }
/* | destructor_id LB expression.opt RB                    -- not semantically valid */
/* | destructor_id parenthesis_clause                        -- omitted to resolve known ambiguity */
/* | simple_type_specifier LP expression_list.opt RP       -- simple_type_specifier is a primary_expression */
   | postfix_expression DOT declarator_id								{ $$ = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr3, 3, $1, $2, $3); }
/* | postfix_expression DOT TEMPLATE declarator_id           -- TEMPLATE absorbed into declarator_id. */
   | postfix_expression DOT scoped_pseudo_destructor_id			{ $$ = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr4, 3, $1, $2, $3); }
   | postfix_expression ARROW declarator_id							{ $$ = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr5, 3, $1, $2, $3); }
/* | postfix_expression ARROW TEMPLATE declarator_id         -- TEMPLATE absorbed into declarator_id. */
   | postfix_expression ARROW scoped_pseudo_destructor_id   	{ $$ = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr6, 3, $1, $2, $3); }
   | postfix_expression INC												{ $$ = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr7, 2, $1, $2); }
   | postfix_expression DEC												{ $$ = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr8, 2, $1, $2); }
   | DYNAMIC_CAST LT type_id GT LP expression RP					{ $$ = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr9, 7, $1, $2, $3, $4, $5, $6, $7); }
   | STATIC_CAST LT type_id GT LP expression RP						{ $$ = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr10, 7, $1, $2, $3, $4, $5, $6, $7); }
   | REINTERPRET_CAST LT type_id GT LP expression RP				{ $$ = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr11, 7, $1, $2, $3, $4, $5, $6, $7); }
   | CONST_CAST LT type_id GT LP expression RP						{ $$ = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr12, 7, $1, $2, $3, $4, $5, $6, $7); }
   | TYPEID parameters_clause												{ $$ = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr13, 2, $1, $2); }
/* | TYPEID LP expression RP                               -- covered by parameters_clause */
/* | TYPEID LP type_id RP                                  -- covered by parameters_clause */
;
expression_list.opt:                
	/* empty */																	{  }
   | expression_list															{ $$ = alacnary(S_EXPRESSION_LIST_OPT, EXPRESSION_LIST_OPTr1, 1, $1); }
;	
expression_list:                    
	assignment_expression													{ $$ = alacnary(S_EXPRESSION_LIST, EXPRESSION_LISTr1, 1, $1); }
   | expression_list CM assignment_expression						{ $$ = alacnary(S_EXPRESSION_LIST, EXPRESSION_LISTr2, 3, $1, $2, $3); }
;
unary_expression:                   
	postfix_expression														{ $$ = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr1, 1, $1); }
   | INC cast_expression													{ $$ = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr2, 2, $1, $2); }
   | DEC cast_expression													{ $$ = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr3, 2, $1, $2); }
   | ptr_operator cast_expression										{ $$ = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr4, 2, $1, $2); }
/* | MUL cast_expression                                     -- covered by ptr_operator */
/* | AND cast_expression                                     -- covered by ptr_operator */
/* | decl_specifier_seq MUL cast_expression                  -- covered by binary operator */
/* | decl_specifier_seq AND cast_expression                  -- covered by binary operator */
   | suffix_decl_specified_scope star_ptr_operator cast_expression   
																					{ $$ = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr5, 3, $1, $2, $3); }
																					/* covers e.g int ::type::* const t = 4 */
	| PLUS cast_expression													{ $$ = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr6, 2, $1, $2); }
   | MINUS cast_expression													{ $$ = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr7, 2, $1, $2); }
   | BANG cast_expression													{ $$ = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr8, 2, $1, $2); }
   | NOT cast_expression													{ $$ = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr9, 2, $1, $2); }
   | SIZEOF unary_expression												{ $$ = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr10, 2, $1, $2); }
/* | SIZEOF LP type_id RP                                  -- covered by unary_expression */
   | new_expression															{ $$ = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr11, 1, $1); }
   | global_scope new_expression											{ $$ = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr12, 2, $1, $2); }
   | delete_expression														{ $$ = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr13, 1, $1); }
   | global_scope delete_expression										{ $$ = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr14, 2, $1, $2); }
/* | DELETE LB RB cast_expression       -- covered by DELETE cast_expression since cast_expression covers ... */
/* | SCOPE DELETE LB RB cast_expression //  ... abstract_expression cast_expression and so [] cast_expression */
;
delete_expression:                  
	DELETE cast_expression                                  		{ $$ = alacnary(S_DELETE_EXPRESSION, DELETE_EXPRESSIONr1, 1, $1); }/* also covers DELETE[] cast_expression */
;
new_expression:                     
	NEW new_type_id new_initializer.opt									{ $$ = alacnary(S_NEW_EXPRESSION, NEW_EXPRESSIONr1, 3, $1, $2, $3); }
   | NEW parameters_clause new_type_id new_initializer.opt		{ $$ = alacnary(S_NEW_EXPRESSION, NEW_EXPRESSIONr2, 4, $1, $2, $3, $4); }
   | NEW parameters_clause													{ $$ = alacnary(S_NEW_EXPRESSION, NEW_EXPRESSIONr3, 2, $1, $2); }
/* | NEW LP type-id RP                                 -- covered by parameters_clause */
   | NEW parameters_clause parameters_clause new_initializer.opt	{ $$ = alacnary(S_NEW_EXPRESSION, NEW_EXPRESSIONr4, 4, $1, $2, $3, $4); }
/* | NEW LP type-id RP new_initializer                 -- covered by parameters_clause parameters_clause */
/* | NEW parameters_clause LP type-id RP               -- covered by parameters_clause parameters_clause */
;
/* ptr_operator_seq.opt production reused to save a %prec */
new_type_id:                        
	type_specifier ptr_operator_seq.opt									{ $$ = alacnary(S_NEW_TYPE_ID, NEW_TYPE_IDr1, 2, $1, $2); }
   | type_specifier new_declarator										{ $$ = alacnary(S_NEW_TYPE_ID, NEW_TYPE_IDr2, 2, $1, $2); }
   | type_specifier new_type_id											{ $$ = alacnary(S_NEW_TYPE_ID, NEW_TYPE_IDr3, 2, $1, $2); }
;	
new_declarator:                     
	ptr_operator new_declarator											{ $$ = alacnary(S_NEW_DECLARATOR, NEW_DECLARATORr1, 2, $1, $2); }
   | direct_new_declarator													{ $$ = alacnary(S_NEW_DECLARATOR, NEW_DECLARATORr2, 1, $1); }
;	
direct_new_declarator:              
	LB expression RB															{ $$ = alacnary(S_DIRECT_NEW_DECLARATOR, DIRECT_NEW_DECLARATORr1, 3, $1, $2, $3); }
   | direct_new_declarator LB constant_expression RB				{ $$ = alacnary(S_DIRECT_NEW_DECLARATOR, DIRECT_NEW_DECLARATORr2, 4, $1, $2, $3, $4); }
;	
new_initializer.opt:                
	/* empty */																	{  }
   | LP expression_list.opt RP											{ $$ = alacnary(S_NEW_INIIALIZER_OPT, NEW_INIIALIZER_OPTr1, 3, $1, $2, $3); }
;
/*  cast-expression is generalised to support a [] as well as a () prefix. This covers the omission of DELETE[] which when
 *  followed by a parenthesised expression was ambiguous. It also covers the gcc indexed array initialisation for free.
 */
cast_expression:                    
	unary_expression															{ $$ = alacnary(S_CAST_EXPRESSION, CAST_EXPRESSIONr1, 1, $1); }
   | abstract_expression cast_expression								{ $$ = alacnary(S_CAST_EXPRESSION, CAST_EXPRESSIONr2, 2, $1, $2); }
/* | LP type_id RP cast_expression                             -- covered by abstract_expression */
;
pm_expression:                      
	cast_expression															{ $$ = alacnary(S_PM_EXPRESSION, PM_EXPRESSIONr1, 1, $1); }
   | pm_expression DOT_STAR cast_expression							{ $$ = alacnary(S_PM_EXPRESSION, PM_EXPRESSIONr2, 3, $1, $2, $3); }
   | pm_expression ARROW_STAR cast_expression						{ $$ = alacnary(S_PM_EXPRESSION, PM_EXPRESSIONr3, 3, $1, $2, $3); }
;	
multiplicative_expression:          
	pm_expression																{ $$ = alacnary(S_MULTIPLICATIVE_EXPRESSION, MULTIPLICATIVE_EXPRESSIONr1, 1, $1); }
   | multiplicative_expression star_ptr_operator pm_expression	{ $$ = alacnary(S_MULTIPLICATIVE_EXPRESSION, MULTIPLICATIVE_EXPRESSIONr2, 3, $1, $2, $3); }
   | multiplicative_expression DIV pm_expression					{ $$ = alacnary(S_MULTIPLICATIVE_EXPRESSION, MULTIPLICATIVE_EXPRESSIONr3, 3, $1, $2, $3); }
   | multiplicative_expression MOD pm_expression					{ $$ = alacnary(S_MULTIPLICATIVE_EXPRESSION, MULTIPLICATIVE_EXPRESSIONr4, 3, $1, $2, $3); }
;	
additive_expression:                
	multiplicative_expression												{ $$ = alacnary(S_ADDITIVE_EXPRESSION, ADDITIVE_EXPRESSIONr1, 1, $1); }
   | additive_expression PLUS multiplicative_expression			{ $$ = alacnary(S_ADDITIVE_EXPRESSION, ADDITIVE_EXPRESSIONr2, 3, $1, $2, $3); }
   | additive_expression MINUS multiplicative_expression			{ $$ = alacnary(S_ADDITIVE_EXPRESSION, ADDITIVE_EXPRESSIONr3, 3, $1, $2, $3); }
;	
shift_expression:                   
	additive_expression														{ $$ = alacnary(S_SHIFT_EXPRESSION, SHIFT_EXPRESSIONr1, 1, $1); }
   | shift_expression SHL additive_expression						{ $$ = alacnary(S_SHIFT_EXPRESSION, SHIFT_EXPRESSIONr2, 3, $1, $2, $3); }
   | shift_expression SHR additive_expression						{ $$ = alacnary(S_SHIFT_EXPRESSION, SHIFT_EXPRESSIONr3, 3, $1, $2, $3); }
;	
relational_expression:              
	shift_expression															{ $$ = alacnary(S_RELATIONAL_EXPRESSION, RELATIONAL_EXPRESSIONr1, 1, $1); }
   | relational_expression LT shift_expression						{ $$ = alacnary(S_RELATIONAL_EXPRESSION, RELATIONAL_EXPRESSIONr2, 3, $1, $2, $3); }
   | relational_expression GT shift_expression						{ $$ = alacnary(S_RELATIONAL_EXPRESSION, RELATIONAL_EXPRESSIONr3, 3, $1, $2, $3); }
   | relational_expression LE shift_expression						{ $$ = alacnary(S_RELATIONAL_EXPRESSION, RELATIONAL_EXPRESSIONr4, 3, $1, $2, $3); }
   | relational_expression GE shift_expression						{ $$ = alacnary(S_RELATIONAL_EXPRESSION, RELATIONAL_EXPRESSIONr5, 3, $1, $2, $3); }
;	
equality_expression:                
	relational_expression													{ $$ = alacnary(S_EQUALITY_EXPRESSION, EQUALITY_EXPRESSIONr1, 1, $1); }
   | equality_expression EQ relational_expression					{ $$ = alacnary(S_EQUALITY_EXPRESSION, EQUALITY_EXPRESSIONr2, 3, $1, $2, $3); }
   | equality_expression NE relational_expression					{ $$ = alacnary(S_EQUALITY_EXPRESSION, EQUALITY_EXPRESSIONr3, 3, $1, $2, $3); }
;	
and_expression:                     
	equality_expression														{ $$ = alacnary(S_AND_EXPRESSION, AND_EXPRESSIONr1, 1, $1); }
   | and_expression AND equality_expression							{ $$ = alacnary(S_AND_EXPRESSION, AND_EXPRESSIONr2, 3, $1, $2, $3); }
;	
exclusive_or_expression:            
	and_expression																{ $$ = alacnary(S_EXCLUSIVE_OR_EXPRESSION, EXCLUSIVE_OR_EXPRESSIONr1, 1, $1); }
   | exclusive_or_expression ER and_expression						{ $$ = alacnary(S_EXCLUSIVE_OR_EXPRESSION, EXCLUSIVE_OR_EXPRESSIONr2, 3, $1, $2, $3); }
;	
inclusive_or_expression:            
	exclusive_or_expression													{ $$ = alacnary(S_INCLUSIVE_OR_EXPRESSION, INCLUSIVE_OR_EXPRESSIONr1, 1, $1); }
   | inclusive_or_expression OR exclusive_or_expression			{ $$ = alacnary(S_INCLUSIVE_OR_EXPRESSION, INCLUSIVE_OR_EXPRESSIONr2, 3, $1, $2, $3); }
;	
logical_and_expression:             
	inclusive_or_expression													{ $$ = alacnary(S_LOGICAL_AND_EXPRESSION, LOGICAL_AND_EXPRESSIONr1, 1, $1); }
   | logical_and_expression LOG_AND inclusive_or_expression		{ $$ = alacnary(S_LOGICAL_AND_EXPRESSION, LOGICAL_AND_EXPRESSIONr2, 3, $1, $2, $3); }
;	
logical_or_expression:              
	logical_and_expression													{ $$ = alacnary(S_LOGICAL_OR_EXPRESSION, LOGICAL_OR_EXPRESSIONr1, 1, $1); }
   | logical_or_expression LOG_OR logical_and_expression			{ $$ = alacnary(S_LOGICAL_OR_EXPRESSION, LOGICAL_OR_EXPRESSIONr2, 3, $1, $2, $3); }
;	
conditional_expression:             
	logical_or_expression													{ $$ = alacnary(S_CONDITIONAL_EXPRESSION, CONDITIONAL_EXPRESSIONr1, 1, $1); }
   | logical_or_expression QUEST expression COLON assignment_expression
																					{ $$ = alacnary(S_CONDITIONAL_EXPRESSION, CONDITIONAL_EXPRESSIONr2, 5, $1, $2, $3, $4, $5); }
;
/*  assignment-expression is generalised to cover the simple assignment of a braced initializer in order to contribute to the
 *  coverage of parameter-declaration and init-declaration.
 */
assignment_expression:              
	conditional_expression													{ $$ = alacnary(S_ASSIGNMENT_EXPRESSION, ASSIGNMENT_EXPRESSIONr1, 1, $1); }
   | logical_or_expression assignment_operator assignment_expression
																					{ $$ = alacnary(S_ASSIGNMENT_EXPRESSION, ASSIGNMENT_EXPRESSIONr2, 3, $1, $2, $3); }
   | logical_or_expression ASN braced_initializer					{ $$ = alacnary(S_ASSIGNMENT_EXPRESSION, ASSIGNMENT_EXPRESSIONr3, 3, $1, $2, $3); }
   | throw_expression														{ $$ = alacnary(S_ASSIGNMENT_EXPRESSION, ASSIGNMENT_EXPRESSIONr4, 1, $1); }
;	
assignment_operator:                
	ASN 																			{ $$ = alacnary(S_ASSIGNMENT_OPERATOR, ASSIGNMENT_OPERATORr1, 1, $1); }
	| ASS_ADD 																	{ $$ = alacnary(S_ASSIGNMENT_OPERATOR, ASSIGNMENT_OPERATORr2, 1, $1); }
	| ASS_AND 																	{ $$ = alacnary(S_ASSIGNMENT_OPERATOR, ASSIGNMENT_OPERATORr3, 1, $1); }
	| ASS_DIV 																	{ $$ = alacnary(S_ASSIGNMENT_OPERATOR, ASSIGNMENT_OPERATORr4, 1, $1); }
	| ASS_MOD 																	{ $$ = alacnary(S_ASSIGNMENT_OPERATOR, ASSIGNMENT_OPERATORr5, 1, $1); }
	| ASS_MUL 																	{ $$ = alacnary(S_ASSIGNMENT_OPERATOR, ASSIGNMENT_OPERATORr6, 1, $1); }
	| ASS_OR 																	{ $$ = alacnary(S_ASSIGNMENT_OPERATOR, ASSIGNMENT_OPERATORr7, 1, $1); }
	| ASS_SHL 																	{ $$ = alacnary(S_ASSIGNMENT_OPERATOR, ASSIGNMENT_OPERATORr8, 1, $1); }
	| ASS_SHR 																	{ $$ = alacnary(S_ASSIGNMENT_OPERATOR, ASSIGNMENT_OPERATORr9, 1, $1); }
	| ASS_SUB 																	{ $$ = alacnary(S_ASSIGNMENT_OPERATOR, ASSIGNMENT_OPERATORr10, 1, $1); }
	| ASS_XOR																	{ $$ = alacnary(S_ASSIGNMENT_OPERATOR, ASSIGNMENT_OPERATORr11, 1, $1); }
;
/*  expression is widely used and usually single-element, so the reductions are arranged so that a
 *  single-element expression is returned as is. Multi-element expressions are parsed as a list that
 *  may then behave polymorphically as an element or be compacted to an element. */ 
expression.opt:                     
	/* empty */																	{  }
   | expression																{ $$ = alacnary(S_EXPRESSION_OPT, EXPRESSION_OPTr1, 1, $1); }
;	
expression:                         
	assignment_expression													{ $$ = alacnary(S_EXPRESSION, EXPRESSIONr1, 1, $1); }
   | expression_list CM assignment_expression						{ $$ = alacnary(S_EXPRESSION, EXPRESSIONr2, 3, $1, $2, $3); }
;	
constant_expression:                
	conditional_expression													{ $$ = alacnary(S_CONSTANT_EXPRESSION, CONSTANT_EXPRESSIONr1, 1, $1); }
;
/*  The grammar is repeated for when the parser stack knows that the next > must end a template.
 */
templated_relational_expression:    
	shift_expression															{ $$ = alacnary(S_TEMPLATED_RELATIONAL_EXPRESSION, TEMPLATED_RELATIONAL_EXPRESSIONr1, 1, $1); }
   | templated_relational_expression LT shift_expression			{ $$ = alacnary(S_TEMPLATED_RELATIONAL_EXPRESSION, TEMPLATED_RELATIONAL_EXPRESSIONr2, 3, $1, $2, $3); }
   | templated_relational_expression LE shift_expression			{ $$ = alacnary(S_TEMPLATED_RELATIONAL_EXPRESSION, TEMPLATED_RELATIONAL_EXPRESSIONr3, 3, $1, $2, $3); }
   | templated_relational_expression GE shift_expression			{ $$ = alacnary(S_TEMPLATED_RELATIONAL_EXPRESSION, TEMPLATED_RELATIONAL_EXPRESSIONr4, 3, $1, $2, $3); }
;	
templated_equality_expression:      
	templated_relational_expression										{ $$ = alacnary(S_TEMPLATED_EQUALITY_EXPRESSION, TEMPLATED_EQUALITY_EXPRESSIONr1, 1, $1); }
   | templated_equality_expression EQ templated_relational_expression
																					{ $$ = alacnary(S_TEMPLATED_EQUALITY_EXPRESSION, TEMPLATED_EQUALITY_EXPRESSIONr2, 3, $1, $2, $3); }
   | templated_equality_expression NE templated_relational_expression
																					{ $$ = alacnary(S_TEMPLATED_EQUALITY_EXPRESSION, TEMPLATED_EQUALITY_EXPRESSIONr3, 3, $1, $2, $3); }
;	
templated_and_expression:           
	templated_equality_expression											{ $$ = alacnary(S_TEMPLATED_AND_EXPRESSION, TEMPLATED_AND_EXPRESSIONr1, 1, $1); }
   | templated_and_expression AND templated_equality_expression { $$ = alacnary(S_TEMPLATED_AND_EXPRESSION, TEMPLATED_AND_EXPRESSIONr2, 3, $1, $2, $3); }
	
templated_exclusive_or_expression:  
	templated_and_expression												{ $$ = alacnary(S_TEMPLATED_EXLUSIVE_OR_EXPRESSION, TEMPLATED_EXLUSIVE_OR_EXPRESSIONr1, 1, $1); }
   | templated_exclusive_or_expression ER templated_and_expression
																					{ $$ = alacnary(S_TEMPLATED_EXLUSIVE_OR_EXPRESSION, TEMPLATED_EXLUSIVE_OR_EXPRESSIONr2, 3, $1, $2, $3); }

templated_inclusive_or_expression:  
	templated_exclusive_or_expression									{ $$ = alacnary(S_TEMPLATED_INCLUSIVE_OR_EXPRESSION, TEMPLATED_INCLUSIVE_OR_EXPRESSIONr1, 1, $1); }
   | templated_inclusive_or_expression OR templated_exclusive_or_expression
																					{ $$ = alacnary(S_TEMPLATED_INCLUSIVE_OR_EXPRESSION, TEMPLATED_INCLUSIVE_OR_EXPRESSIONr2, 3, $1, $2, $3); }

templated_logical_and_expression:   
	templated_inclusive_or_expression									{ $$ = alacnary(S_TEMPLATED_LOGICAL_AND_EXPRESSION, TEMPLATED_LOGICAL_AND_EXPRESSIONr1, 1, $1); }
   | templated_logical_and_expression LOG_AND templated_inclusive_or_expression
																					{ $$ = alacnary(S_TEMPLATED_LOGICAL_AND_EXPRESSION, TEMPLATED_LOGICAL_AND_EXPRESSIONr2, 3, $1, $2, $3); }

templated_logical_or_expression:    
	templated_logical_and_expression										{ $$ = alacnary(S_TEMPLATED_LOGICAL_OR_EXPRESSION, TEMPLATED_LOGICAL_OR_EXPRESSIONr1, 1, $1); }
   | templated_logical_or_expression LOG_OR templated_logical_and_expression
																					{ $$ = alacnary(S_TEMPLATED_LOGICAL_OR_EXPRESSION, TEMPLATED_LOGICAL_OR_EXPRESSIONr2, 3, $1, $2, $3); }

templated_conditional_expression:   
	templated_logical_or_expression										{ $$ = alacnary(S_TEMPLATED_CONDITIONAL_EXPRESSION, TEMPLATED_CONDITIONAL_EXPRESSIONr1, 1, $1); }
   | templated_logical_or_expression QUEST templated_expression COLON templated_assignment_expression
																					{ $$ = alacnary(S_TEMPLATED_CONDITIONAL_EXPRESSION, TEMPLATED_CONDITIONAL_EXPRESSIONr2, 5, $1, $2, $3, $4, $5); }

templated_assignment_expression:    
	templated_conditional_expression										{ $$ = alacnary(S_TEMPLATED_ASSIGNMENT_EXPRESSION, TEMPLATED_ASSIGNMENT_EXPRESSIONr1, 1, $1); }
   | templated_logical_or_expression assignment_operator templated_assignment_expression
																					{ $$ = alacnary(S_TEMPLATED_ASSIGNMENT_EXPRESSION, TEMPLATED_ASSIGNMENT_EXPRESSIONr2, 3, $1, $2, $3); }
   | templated_throw_expression											{ $$ = alacnary(S_TEMPLATED_ASSIGNMENT_EXPRESSION, TEMPLATED_ASSIGNMENT_EXPRESSIONr3, 1, $1); }
	
templated_expression:               
	templated_assignment_expression										{ $$ = alacnary(S_TEMPLATED_EXPRESSION, TEMPLATED_EXPRESSIONr1, 1, $1); }
   | templated_expression_list CM templated_assignment_expression
																					{ $$ = alacnary(S_TEMPLATED_EXPRESSION, TEMPLATED_EXPRESSIONr2, 3, $1, $2, $3); }

templated_expression_list:          
	templated_assignment_expression										{ $$ = alacnary(S_TEMPLATED_EXPRESSION_LIST, TEMPLATED_EXPRESSION_LISTr1, 1, $1); }
   | templated_expression_list CM templated_assignment_expression
																					{ $$ = alacnary(S_TEMPLATED_EXPRESSION_LIST, TEMPLATED_EXPRESSION_LISTr2, 3, $1, $2, $3); }

/*---------------------------------------------------------------------------------------------------
 * A.5 Statements
 *---------------------------------------------------------------------------------------------------
 *  Parsing statements is easy once simple_declaration has been generalised to cover expression_statement.
 */
looping_statement:                  
	start_search looped_statement                              	{ $$ = alacnary(S_LOOPING_STATEMENT, LOOPING_STATEMENTr1, 2, $1, $2); }/* { end_search(); }*/
	
looped_statement:                   
	statement																	{ $$ = alacnary(S_LOOPED_STATEMENT, LOOPED_STATEMENTr1, 1, $1); }
   | advance_search PLUS looped_statement								{ $$ = alacnary(S_LOOPED_STATEMENT, LOOPED_STATEMENTr2, 3, $1, $2, $3); }
   | advance_search MINUS													{ $$ = alacnary(S_LOOPED_STATEMENT, LOOPED_STATEMENTr3, 2, $1, $2); }
	
statement:                          
	control_statement															{ $$ = alacnary(S_STATEMENT, STATEMENTr1, 1, $1); }
/* | expression_statement                                        -- covered by declaration_statement */
   | compound_statement														{ $$ = alacnary(S_STATEMENT, STATEMENTr2, 1, $1); }
   | declaration_statement													{ $$ = alacnary(S_STATEMENT, STATEMENTr3, 1, $1); }
   | try_block																	{ $$ = alacnary(S_STATEMENT, STATEMENTr4, 1, $1); }
	
control_statement:                  
	labeled_statement															{ $$ = alacnary(S_CONTROL_STATEMENT, CONTROL_STATEMENTr1, 1, $1); }
   | selection_statement													{ $$ = alacnary(S_CONTROL_STATEMENT, CONTROL_STATEMENTr2, 1, $1); }
   | iteration_statement													{ $$ = alacnary(S_CONTROL_STATEMENT, CONTROL_STATEMENTr3, 1, $1); }
   | jump_statement															{ $$ = alacnary(S_CONTROL_STATEMENT, CONTROL_STATEMENTr4, 1, $1); }
	
labeled_statement:                  
	identifier COLON looping_statement									{ $$ = alacnary(S_LABELED_STATEMENT, LABELED_STATEMENTr1, 3, $1, $2, $3); }
   | CASE constant_expression COLON looping_statement				{ $$ = alacnary(S_LABELED_STATEMENT, LABELED_STATEMENTr2, 4, $1, $2, $3, $4); }
   | DEFAULT COLON looping_statement									{ $$ = alacnary(S_LABELED_STATEMENT, LABELED_STATEMENTr3, 3, $1, $2, $3); }
	
/*expression_statement:             
	expression.opt SM                                          -- covered by declaration_statement */
	
compound_statement:                 
	LC statement_seq.opt RC													{ $$ = alacnary(S_COMPOUND_STATEMENT, COMPOUND_STATEMENTr1, 3, $1, $2, $3); }
   | LC statement_seq.opt looping_statement POUND bang error RC { $$ = alacnary(S_COMPOUND_STATEMENT, COMPOUND_STATEMENTr2, 7, $1, $2, $3, $4, $5, $6, $7); }
																					/*{ UNBANG("Bad statement-seq."); }*/
	
statement_seq.opt:                  
	/* empty */																	{  }
   | statement_seq.opt looping_statement								{ $$ = alacnary(S_STATEMENT_SEQ_OPT, STATEMENT_SEQ_OPTr1, 2, $1, $2); }
   | statement_seq.opt looping_statement POUND bang error SM   { $$ = alacnary(S_STATEMENT_SEQ_OPT, STATEMENT_SEQ_OPTr2, 6, $1, $2, $3, $4, $5, $6); }  
																					/* { UNBANG("Bad statement."); }*/
	
/*
 *  The dangling else conflict is resolved to the innermost if.
 */
selection_statement:                
	IF LP condition RP looping_statement   							{ $$ = alacnary(S_SELECTION_STATEMENT, SELECTION_STATEMENTr1, 5, $1, $2, $3, $4, $5); }/* %prec SHIFT_THERE */
   | IF LP condition RP looping_statement ELSE looping_statement { $$ = alacnary(S_SELECTION_STATEMENT, SELECTION_STATEMENTr2, 7, $1, $2, $3, $4, $5, $6, $7); }
   | SWITCH LP condition RP looping_statement						{ $$ = alacnary(S_SELECTION_STATEMENT, SELECTION_STATEMENTr3, 5, $1, $2, $3, $4, $5); }
	
condition.opt:                      
	/* empty */																	{  }
   | condition																	{ $$ = alacnary(S_CONDIION_OPT, CONDIION_OPTr1, 1, $1); }
	
condition:                          
	parameter_declaration_list												{ $$ = alacnary(S_CONDIION, CONDIIONr1, 1, $1); }
/* | expression                                                  -- covered by parameter_declaration_list */
/* | type_specifier_seq declarator ASN assignment_expression     -- covered by parameter_declaration_list */

iteration_statement:                
	WHILE LP condition RP looping_statement							{ $$ = alacnary(S_ITERATION_STATEMENT, ITERATION_STATEMENTr1, 5, $1, $2, $3, $4, $5); }
   | DO looping_statement WHILE LP expression RP SM				{ $$ = alacnary(S_ITERATION_STATEMENT, ITERATION_STATEMENTr2, 7, $1, $2, $3, $4, $5, $6, $7); }
   | FOR LP for_init_statement condition.opt SM expression.opt RP looping_statement
																					{ $$ = alacnary(S_ITERATION_STATEMENT, ITERATION_STATEMENTr3, 8, $1, $2, $3, $4, $5, $6, $7, $8); }

for_init_statement:                 
	simple_declaration														{ $$ = alacnary(S_FOR_INIT_STATEMENT, FOR_INIT_STATEMENTr1, 1, $1); }
/* | expression_statement                                        -- covered by simple_declaration */

jump_statement:                     
	BREAK SM																		{ $$ = alacnary(S_JUMP_STATEMENT, JUMP_STATEMENTr1, 2, $1, $2); }
   | CONTINUE SM																{ $$ = alacnary(S_JUMP_STATEMENT, JUMP_STATEMENTr2, 2, $1, $2); }
   | RETURN expression.opt SM												{ $$ = alacnary(S_JUMP_STATEMENT, JUMP_STATEMENTr3, 3, $1, $2, $3); }
   | GOTO identifier SM														{ $$ = alacnary(S_JUMP_STATEMENT, JUMP_STATEMENTr4, 3, $1, $2, $3); }
	
declaration_statement:              
	block_declaration															{ $$ = alacnary(S_DECLARATION_STATEMENT, DECLARATION_STATEMENTr1, 1, $1); }

/*---------------------------------------------------------------------------------------------------
 * A.6 Declarations
 *---------------------------------------------------------------------------------------------------*/
compound_declaration:               
	LC nest declaration_seq.opt RC                            	{ $$ = alacnary(S_COMPOUND_DECLARATION, COMPOUND_DECLARATIONr1, 4, $1, $2, $3, $4); }/*{ unnest(); }*/
   | LC nest declaration_seq.opt util looping_declaration POUND bang error RC
																					{ $$ = alacnary(S_COMPOUND_DECLARATION, COMPOUND_DECLARATIONr2, 9, $1, $2, $3, $4, $5, $6, $7, $8, $9); }
                                                                     { /*unnest(); UNBANG("Bad declaration-seq.");*/ }
declaration_seq.opt:                
	/* empty */																	{  }
   | declaration_seq.opt util looping_declaration					{ $$ = alacnary(S_DECLARATION_SEQ_OPT, DECLARATION_SEQ_OPTr1, 3, $1, $2, $3); }
   | declaration_seq.opt util looping_declaration POUND bang error SM 
																					{ $$ = alacnary(S_DECLARATION_SEQ_OPT, DECLARATION_SEQ_OPTr2, 7, $1, $2, $3, $4, $5, $6, $7); }
																					/*{ UNBANG("Bad declaration."); }*/
	
looping_declaration:                
	start_search1 looped_declaration                            { $$ = alacnary(S_LOOPING_DECLARATION, LOOPING_DECLARATIONr1, 2, $1, $2); }/*{ end_search(); }*/
	
looped_declaration:                 
	declaration																	{ $$ = alacnary(S_LOOPED_DECLARATION, LOOPED_DECLARATIONr1, 1, $1); }
   | advance_search PLUS looped_declaration							{ $$ = alacnary(S_LOOPED_DECLARATION, LOOPED_DECLARATIONr2, 3, $1, $2, $3); }
   | advance_search MINUS													{ $$ = alacnary(S_LOOPED_DECLARATION, LOOPED_DECLARATIONr3, 2, $1, $2); }
	
declaration:                        
	block_declaration															{ $$ = alacnary(S_DECLARATION, DECLARATIONr1, 1, $1); }
   | function_definition													{ $$ = alacnary(S_DECLARATION, DECLARATIONr2, 1, $1); }
   | template_declaration													{ $$ = alacnary(S_DECLARATION, DECLARATIONr3, 1, $1); }
/* | explicit_instantiation                                      -- covered by relevant declarations */
   | explicit_specialization												{ $$ = alacnary(S_DECLARATION, DECLARATIONr4, 1, $1); }
   | specialised_declaration												{ $$ = alacnary(S_DECLARATION, DECLARATIONr5, 1, $1); }
	
specialised_declaration:            
	linkage_specification													{ $$ = alacnary(S_SPECIALISED_DECLARATION, SPECIALISED_DECLARATIONr1, 1, $1); }
   | namespace_definition													{ $$ = alacnary(S_SPECIALISED_DECLARATION, SPECIALISED_DECLARATIONr2, 1, $1); }
   | TEMPLATE specialised_declaration									{ $$ = alacnary(S_SPECIALISED_DECLARATION, SPECIALISED_DECLARATIONr3, 2, $1, $2); }
	
block_declaration:                  
	simple_declaration														{ $$ = alacnary(S_BLOCK_DECLARATION, BLOCK_DECLARATIONr1, 1, $1); }
   | specialised_block_declaration										{ $$ = alacnary(S_BLOCK_DECLARATION, BLOCK_DECLARATIONr2, 1, $1); }
	
specialised_block_declaration:      
	asm_definition																{ $$ = alacnary(S_SPECIALISED_BLOCK_DECLARATION, SPECIALISED_BLOCK_DECLARATIONr1, 1, $1); }
   | namespace_alias_definition											{ $$ = alacnary(S_SPECIALISED_BLOCK_DECLARATION, SPECIALISED_BLOCK_DECLARATIONr2, 1, $1); }
   | using_declaration														{ $$ = alacnary(S_SPECIALISED_BLOCK_DECLARATION, SPECIALISED_BLOCK_DECLARATIONr3, 1, $1); }
   | using_directive															{ $$ = alacnary(S_SPECIALISED_BLOCK_DECLARATION, SPECIALISED_BLOCK_DECLARATIONr4, 1, $1); }
   | TEMPLATE specialised_block_declaration							{ $$ = alacnary(S_SPECIALISED_BLOCK_DECLARATION, SPECIALISED_BLOCK_DECLARATIONr5, 2, $1, $2); }
	
simple_declaration:                 
	SM																				{ $$ = alacnary(S_SIMPLE_DECLARATION, SIMPLE_DECLARATIONr1, 1, $1); }
   | init_declaration SM													{ $$ = alacnary(S_SIMPLE_DECLARATION, SIMPLE_DECLARATIONr2, 2, $1, $2); }
   | init_declarations SM													{ $$ = alacnary(S_SIMPLE_DECLARATION, SIMPLE_DECLARATIONr3, 2, $1, $2); }
   | decl_specifier_prefix simple_declaration						{ $$ = alacnary(S_SIMPLE_DECLARATION, SIMPLE_DECLARATIONr4, 2, $1, $2); }

/*  A decl-specifier following a ptr_operator provokes a shift-reduce conflict for
 *      * const name
 *  which is resolved in favour of the pointer, and implemented by providing versions
 *  of decl-specifier guaranteed not to start with a cv_qualifier.
 *
 *  decl-specifiers are implemented type-centrically. That is the semantic constraint
 *  that there must be a type is exploited to impose structure, but actually eliminate
 *  very little syntax. built-in types are multi-name and so need a different policy.
 *
 *  non-type decl-specifiers are bound to the left-most type in a decl-specifier-seq,
 *  by parsing from the right and attaching suffixes to the right-hand type. Finally
 *  residual prefixes attach to the left.                
 */
suffix_built_in_decl_specifier.raw: 
	built_in_type_specifier													{ $$ = alacnary(S_SUFFIX_BUILT_IN_DECL_SPECIFIER_RAW, SUFFIX_BUILT_IN_DECL_SPECIFIER_RAWr1, 1, $1); }
   | suffix_built_in_decl_specifier.raw built_in_type_specifier { $$ = alacnary(S_SUFFIX_BUILT_IN_DECL_SPECIFIER_RAW, SUFFIX_BUILT_IN_DECL_SPECIFIER_RAWr2, 2, $1, $2); }
   | suffix_built_in_decl_specifier.raw decl_specifier_suffix	{ $$ = alacnary(S_SUFFIX_BUILT_IN_DECL_SPECIFIER_RAW, SUFFIX_BUILT_IN_DECL_SPECIFIER_RAWr3, 2, $1, $2); }
	
suffix_built_in_decl_specifier:     
	suffix_built_in_decl_specifier.raw									{ $$ = alacnary(S_SUFFIX_BUILT_IN_DECL_SPECIFIER, SUFFIX_BUILT_IN_DECL_SPECIFIERr1, 1, $1); }
   | TEMPLATE suffix_built_in_decl_specifier							{ $$ = alacnary(S_SUFFIX_BUILT_IN_DECL_SPECIFIER, SUFFIX_BUILT_IN_DECL_SPECIFIERr2, 2, $1, $2); }
	
suffix_named_decl_specifier:        
	scoped_id																	{ $$ = alacnary(S_SUFFIX_NAMED_DECL_SPECIFIER, SUFFIX_NAMED_DECL_SPECIFIERr1, 1, $1); }
   | elaborate_type_specifier												{ $$ = alacnary(S_SUFFIX_NAMED_DECL_SPECIFIER, SUFFIX_NAMED_DECL_SPECIFIERr2, 1, $1); }
   | suffix_named_decl_specifier decl_specifier_suffix			{ $$ = alacnary(S_SUFFIX_NAMED_DECL_SPECIFIER, SUFFIX_NAMED_DECL_SPECIFIERr3, 2, $1, $2); }
	
suffix_named_decl_specifier.bi:     
	suffix_named_decl_specifier											{ $$ = alacnary(S_SUFFIX_NAMED_DECL_SPECIFIER_BI, SUFFIX_NAMED_DECL_SPECIFIER_BIr1, 1, $1); }
   | suffix_named_decl_specifier suffix_built_in_decl_specifier.raw
																					{ $$ = alacnary(S_SUFFIX_NAMED_DECL_SPECIFIER_BI, SUFFIX_NAMED_DECL_SPECIFIER_BIr2, 2, $1, $2); }
	
suffix_named_decl_specifiers:       
	suffix_named_decl_specifier.bi										{ $$ = alacnary(S_SUFFIX_NAMED_DECL_SPECIFIERS, SUFFIX_NAMED_DECL_SPECIFIERSr1, 1, $1); }
   | suffix_named_decl_specifiers suffix_named_decl_specifier.bi { $$ = alacnary(S_SUFFIX_NAMED_DECL_SPECIFIERS, SUFFIX_NAMED_DECL_SPECIFIERSr2, 2, $1, $2); }
	
suffix_named_decl_specifiers.sf:    
	scoped_special_function_id          								{ $$ = alacnary(S_SUFFIX_NAMED_DECL_SPECIFIERS_SF, SUFFIX_NAMED_DECL_SPECIFIERS_SFr1, 1, $1); }/* operators etc */
   | suffix_named_decl_specifiers										{ $$ = alacnary(S_SUFFIX_NAMED_DECL_SPECIFIERS_SF, SUFFIX_NAMED_DECL_SPECIFIERS_SFr2, 1, $1); }
   | suffix_named_decl_specifiers scoped_special_function_id	{ $$ = alacnary(S_SUFFIX_NAMED_DECL_SPECIFIERS_SF, SUFFIX_NAMED_DECL_SPECIFIERS_SFr3, 2, $1, $2); }
	
suffix_decl_specified_ids:          
	suffix_built_in_decl_specifier										{ $$ = alacnary(S_SUFFIX_DECL_SPECIFIED_IDS, SUFFIX_DECL_SPECIFIED_IDSr1, 1, $1); }
   | suffix_built_in_decl_specifier suffix_named_decl_specifiers.sf
																					{ $$ = alacnary(S_SUFFIX_DECL_SPECIFIED_IDS, SUFFIX_DECL_SPECIFIED_IDSr2, 2, $1, $2); }
   | suffix_named_decl_specifiers.sf									{ $$ = alacnary(S_SUFFIX_DECL_SPECIFIED_IDS, SUFFIX_DECL_SPECIFIED_IDSr3, 1, $1); }
	
suffix_decl_specified_scope:        
	suffix_named_decl_specifiers SCOPE									{ $$ = alacnary(S_SUFFIX_DECL_SPECIFIED_SCOPE, SUFFIX_DECL_SPECIFIED_SCOPEr1, 2, $1, $2); }
   | suffix_built_in_decl_specifier suffix_named_decl_specifiers SCOPE
																					{ $$ = alacnary(S_SUFFIX_DECL_SPECIFIED_SCOPE, SUFFIX_DECL_SPECIFIED_SCOPEr2, 3, $1, $2, $3); }
   | suffix_built_in_decl_specifier SCOPE								{ $$ = alacnary(S_SUFFIX_DECL_SPECIFIED_SCOPE, SUFFIX_DECL_SPECIFIED_SCOPEr3, 2, $1, $2); }

decl_specifier_affix:               
	storage_class_specifier													{ $$ = alacnary(S_DECL_SPECIFIER_AFFIX, DECL_SPECIFIER_AFFIXr1, 1, $1); }
   | function_specifier														{ $$ = alacnary(S_DECL_SPECIFIER_AFFIX, DECL_SPECIFIER_AFFIXr2, 1, $1); }
   | FRIEND                                                    { $$ = alacnary(S_DECL_SPECIFIER_AFFIX, DECL_SPECIFIER_AFFIXr3, 1, $1); }
   | TYPEDEF																	{ $$ = alacnary(S_DECL_SPECIFIER_AFFIX, DECL_SPECIFIER_AFFIXr4, 1, $1); }
   | cv_qualifier																{ $$ = alacnary(S_DECL_SPECIFIER_AFFIX, DECL_SPECIFIER_AFFIXr5, 1, $1); }

decl_specifier_suffix:              
	decl_specifier_affix														{ $$ = alacnary(S_DECL_SPECIFIER_SUFFIX, DECL_SPECIFIER_SUFFIXr1, 1, $1); }

decl_specifier_prefix:              
	decl_specifier_affix														{ $$ = alacnary(S_DECL_SPECIFIER_PREFIX, DECL_SPECIFIER_PREFIXr1, 1, $1); }
   | TEMPLATE decl_specifier_prefix										{ $$ = alacnary(S_DECL_SPECIFIER_PREFIX, DECL_SPECIFIER_PREFIXr2, 2, $1, $2); }

storage_class_specifier:            
	REGISTER 																	{ $$ = alacnary(S_STORAGE_CLASS_SPECIFIER, STORAGE_CLASS_SPECIFIERr1, 1, $1); }
	| STATIC 																	{ $$ = alacnary(S_STORAGE_CLASS_SPECIFIER, STORAGE_CLASS_SPECIFIERr2, 1, $1); }
	| MUTABLE																	{ $$ = alacnary(S_STORAGE_CLASS_SPECIFIER, STORAGE_CLASS_SPECIFIERr3, 1, $1); }
   | EXTERN                 												{ $$ = alacnary(S_STORAGE_CLASS_SPECIFIER, STORAGE_CLASS_SPECIFIERr4, 1, $1); }
																					/* %prec SHIFT_THERE */                  /* Prefer linkage specification */
   | AUTO																		{ $$ = alacnary(S_STORAGE_CLASS_SPECIFIER, STORAGE_CLASS_SPECIFIERr5, 1, $1); }

function_specifier:                 
	EXPLICIT																		{ $$ = alacnary(S_FUNCTION_SPECIFIER, FUNCTION_SPECIFIERr1, 1, $1); }
   | INLINE																		{ $$ = alacnary(S_FUNCTION_SPECIFIER, FUNCTION_SPECIFIERr2, 1, $1); }
   | VIRTUAL																	{ $$ = alacnary(S_FUNCTION_SPECIFIER, FUNCTION_SPECIFIERr3, 1, $1); }

type_specifier:                     
	simple_type_specifier
   | elaborate_type_specifier
   | cv_qualifier

elaborate_type_specifier:           
	class_specifier
   | enum_specifier
   | elaborated_type_specifier
   | TEMPLATE elaborate_type_specifier
	
simple_type_specifier:              
	scoped_id
   | built_in_type_specifier
	
built_in_type_specifier:            
	CHAR 
	| WCHAR_T 
	| BOOL 
	| SHORT 
	| INT 
	| LONG 
	| SIGNED 
	| UNSIGNED 
	| FLOAT 
	| DOUBLE 
	| VOID

/*
 *  The over-general use of declaration_expression to cover decl-specifier-seq.opt declarator in a function-definition means that
 *      class X { };
 *  could be a function-definition or a class-specifier.
 *      enum X { };
 *  could be a function-definition or an enum-specifier.
 *  The function-definition is not syntactically valid so resolving the false conflict in favour of the
 *  elaborated_type_specifier is correct.
 */
elaborated_type_specifier:          
	elaborated_class_specifier
   | elaborated_enum_specifier
   | TYPENAME scoped_id

elaborated_enum_specifier:          
	ENUM scoped_id               %prec SHIFT_THERE
	
enum_specifier:                     
	ENUM scoped_id enumerator_clause
   | ENUM enumerator_clause
	
enumerator_clause:                  
	LC enumerator_list_ecarb
   | LC enumerator_list enumerator_list_ecarb
   | LC enumerator_list CM enumerator_definition_ecarb
	
enumerator_list_ecarb:              
	RC
   | bang error RC                                              {/* UNBANG("Bad enumerator-list.");*/ }
	
enumerator_definition_ecarb:        
	RC
   | bang error RC                                              { /*UNBANG("Bad enumerator-definition.");*/ }
	
enumerator_definition_filler:       
	/* empty */
   | bang error CM                                              { /*UNBANG("Bad enumerator-definition.");*/ }
	
enumerator_list_head:               
	enumerator_definition_filler
   | enumerator_list CM enumerator_definition_filler
	
enumerator_list:                    
	enumerator_list_head enumerator_definition
	
enumerator_definition:              
	enumerator
   | enumerator ASN constant_expression
	
enumerator:                         
	identifier

namespace_definition:               
	NAMESPACE scoped_id compound_declaration
   | NAMESPACE compound_declaration
	
namespace_alias_definition:         
	NAMESPACE scoped_id ASN scoped_id SM

using_declaration:                  
	USING declarator_id SM
   | USING TYPENAME declarator_id SM

using_directive:                    
	USING NAMESPACE scoped_id SM
	
asm_definition:                     
	ASM LP string RP SM
	
linkage_specification:              
	EXTERN string looping_declaration
   | EXTERN string compound_declaration

/*---------------------------------------------------------------------------------------------------
 * A.7 Declarators
 *---------------------------------------------------------------------------------------------------*/
/*init-declarator is named init_declaration to reflect the embedded decl-specifier-seq.opt*/
init_declarations:                  
	assignment_expression CM init_declaration
   | init_declarations CM init_declaration
	
init_declaration:                   
	assignment_expression
/* | assignment_expression ASN initializer_clause                -- covered by assignment_expression */
/* | assignment_expression LP expression_list RP               -- covered by another set of call arguments */

/*declarator:                                                                                   -- covered by assignment_expression */
/*direct_declarator:                                                                            -- covered by postfix_expression */

star_ptr_operator:                  
	MUL
   | star_ptr_operator cv_qualifier
	
nested_ptr_operator:                
	star_ptr_operator
   | id_scope nested_ptr_operator
	
ptr_operator:                       
	AND
   | nested_ptr_operator
   | global_scope nested_ptr_operator
	
ptr_operator_seq:                   
	ptr_operator
   | ptr_operator ptr_operator_seq
	
/* Independently coded to localise the shift-reduce conflict: sharing just needs another %prec */
ptr_operator_seq.opt:               
	/* empty */                         %prec SHIFT_THERE       /* Maximise type length */
   | ptr_operator ptr_operator_seq.opt

cv_qualifier_seq.opt:               
	/* empty */
   | cv_qualifier_seq.opt cv_qualifier
	
cv_qualifier:                       
	CONST 
	| VOLATILE

/*type_id                                                                                       -- also covered by parameter declaration */
type_id:                            
	type_specifier abstract_declarator.opt
   | type_specifier type_id

/*abstract_declarator:                                                                          -- also covered by parameter declaration */
abstract_declarator.opt:            
	/* empty */
   | ptr_operator abstract_declarator.opt
   | direct_abstract_declarator
	
direct_abstract_declarator.opt:     
	/* empty */
   | direct_abstract_declarator
	
direct_abstract_declarator:         
	direct_abstract_declarator.opt parenthesis_clause
   | direct_abstract_declarator.opt LB RB
   | direct_abstract_declarator.opt LB constant_expression RB
/* | LP abstract_declarator RP                                 -- covered by parenthesis_clause */

parenthesis_clause:                 
	parameters_clause cv_qualifier_seq.opt
   | parameters_clause cv_qualifier_seq.opt exception_specification
	
parameters_clause:                  
	LP parameter_declaration_clause RP
	
/* parameter_declaration_clause also covers init_declaration, type_id, declarator and abstract_declarator. */
parameter_declaration_clause:       
	/* empty */
   | parameter_declaration_list
   | parameter_declaration_list ELLIPSIS
	
parameter_declaration_list:         
	parameter_declaration
   | parameter_declaration_list CM parameter_declaration

/*
 * A typed abstract qualifier such as
 *      Class * ...
 * looks like a multiply, so pointers are parsed as their binary operation equivalents that
 * ultimately terminate with a degenerate right hand term.
 */
abstract_pointer_declaration:       
	ptr_operator_seq
   | multiplicative_expression star_ptr_operator ptr_operator_seq.opt
	
abstract_parameter_declaration:     
	abstract_pointer_declaration
   | and_expression AND
   | and_expression AND abstract_pointer_declaration
	
special_parameter_declaration:      
	abstract_parameter_declaration
   | abstract_parameter_declaration ASN assignment_expression
   | ELLIPSIS
	
parameter_declaration:              
	assignment_expression
   | special_parameter_declaration
   | decl_specifier_prefix parameter_declaration

/*  The grammar is repeated for use within template <>
 */
templated_parameter_declaration:    
	templated_assignment_expression
   | templated_abstract_declaration
   | templated_abstract_declaration ASN templated_assignment_expression
   | decl_specifier_prefix templated_parameter_declaration
	
templated_abstract_declaration:     
	abstract_pointer_declaration
   | templated_and_expression AND
   | templated_and_expression AND abstract_pointer_declaration

/*  function_definition includes constructor, destructor, implicit int definitions too.
 *  A local destructor is successfully parsed as a function-declaration but the ~ was treated as a unary operator.
 *  constructor_head is the prefix ambiguity between a constructor and a member-init-list starting with a bit-field.
 */
function_definition:                
	ctor_definition
   | func_definition
	
func_definition:                    
	assignment_expression function_try_block
   | assignment_expression function_body
   | decl_specifier_prefix func_definition
	
ctor_definition:                    
	constructor_head function_try_block
   | constructor_head function_body
   | decl_specifier_prefix ctor_definition
	
constructor_head:                   
	bit_field_init_declaration
   | constructor_head CM assignment_expression
	
function_try_block:                 
	TRY function_block handler_seq
	
function_block:                     
	ctor_initializer.opt function_body
	
function_body:                      
	compound_statement

/*
 *  An = initializer looks like an extended assignment_expression.
 *  An () initializer looks like a function call.
 *  initializer is therefore flattened into its generalised customers.
 *initializer:                      ASN initializer_clause                                      -- flattened into caller
 *  |                               LP expression_list RP                                     -- flattened into caller */
initializer_clause:                 
	assignment_expression
   | braced_initializer
	
braced_initializer:                 
	LC initializer_list RC
   | LC initializer_list CM RC
   | LC RC
   | LC looping_initializer_clause POUND bang error RC           {/* UNBANG("Bad initializer_clause."); */}
   | LC initializer_list CM looping_initializer_clause POUND bang error RC
                                                                                                {/* UNBANG("Bad initializer_clause."); */}
initializer_list:                   
	looping_initializer_clause
   | initializer_list CM looping_initializer_clause
	
looping_initializer_clause:         
	start_search looped_initializer_clause                      {/* end_search(); */}
	
looped_initializer_clause:          
	initializer_clause
   | advance_search PLUS looped_initializer_clause
   | advance_search MINUS

/*---------------------------------------------------------------------------------------------------
 * A.8 Classes
 *---------------------------------------------------------------------------------------------------
 *
 *  An anonymous bit-field declaration may look very like inheritance:
 *      const int B = 3;
 *      class A : B ;
 *  The two usages are too distant to try to create and enforce a common prefix so we have to resort to
 *  a parser hack by backtracking. Inheritance is much the most likely so we mark the input stream context
 *  and try to parse a base-clause. If we successfully reach a { the base-clause is ok and inheritance was
 *  the correct choice so we unmark and continue. If we fail to find the { an error token causes back-tracking
 *  to the alternative parse in elaborated_type_specifier which regenerates the : and declares unconditional success.
 */
colon_mark:                         
	COLON                                                         {/* mark(); */}
	
elaborated_class_specifier:         
	class_key scoped_id                    %prec SHIFT_THERE
   | class_key scoped_id colon_mark error                        {/* rewind_colon();*/ }
	
class_specifier_head:               
	class_key scoped_id colon_mark base_specifier_list LC      { /*unmark();*/ }
   | class_key COLON base_specifier_list LC
   | class_key scoped_id LC
   | class_key LC
	
class_key:                          
	CLASS 
	| STRUCT 
	| UNION
	
class_specifier:                    
	class_specifier_head member_specification.opt RC
   | class_specifier_head member_specification.opt util looping_member_declaration POUND bang error RC
                                            { /*UNBANG("Bad member_specification.opt."); */}
														  
member_specification.opt:           
	/* empty */
   | member_specification.opt util looping_member_declaration
   | member_specification.opt util looping_member_declaration POUND bang error SM
                                             { /*UNBANG("Bad member-declaration."); */}
															
looping_member_declaration:         
	start_search looped_member_declaration                      {/* end_search(); */}
	
looped_member_declaration:          
	member_declaration
   | advance_search PLUS looped_member_declaration
   | advance_search MINUS
	
member_declaration:                 
	accessibility_specifier
   | simple_member_declaration
   | function_definition
/* | function_definition SM                                     -- trailing ; covered by null declaration */
/* | qualified_id SM                                            -- covered by simple_member_declaration */
   | using_declaration
   | template_declaration

/*  The generality of constructor names (there need be no parenthesised argument list) means that that
 *          name : f(g), h(i)
 *  could be the start of a constructor or the start of an anonymous bit-field. An ambiguity is avoided by
 *  parsing the ctor-initializer of a function_definition as a bit-field.
 */
simple_member_declaration:          
	SM
	| assignment_expression SM
   | constructor_head SM
   | member_init_declarations SM
   | decl_specifier_prefix simple_member_declaration
	
member_init_declarations:           
	assignment_expression CM member_init_declaration
   | constructor_head CM bit_field_init_declaration
   | member_init_declarations CM member_init_declaration
	
member_init_declaration:            
	assignment_expression
/* | assignment_expression ASN initializer_clause                -- covered by assignment_expression */
/* | assignment_expression LP expression_list RP               -- covered by another set of call arguments */
   | bit_field_init_declaration
	
accessibility_specifier:            
	access_specifier COLON
	
bit_field_declaration:              
	assignment_expression COLON bit_field_width
   | COLON bit_field_width
	
bit_field_width:                    
	logical_or_expression
/* | logical_or_expression QUEST expression COLON assignment_expression  -- has SR conflict w.r.t later = */
   | logical_or_expression QUEST bit_field_width COLON bit_field_width
	
bit_field_init_declaration:         
	bit_field_declaration
   | bit_field_declaration ASN initializer_clause

/*---------------------------------------------------------------------------------------------------
 * A.9 Derived classes
 *---------------------------------------------------------------------------------------------------*/
/*base_clause:                      
	COLON base_specifier_list                                     -- flattened */
	
base_specifier_list:                
	base_specifier
   | base_specifier_list CM base_specifier
	
base_specifier:                     
	scoped_id
   | access_specifier base_specifier
   | VIRTUAL base_specifier
	
access_specifier:                   
	PRIVATE 
	| PROTECTED 
	| PUBLIC

/*---------------------------------------------------------------------------------------------------
 * A.10 Special member functions
 *---------------------------------------------------------------------------------------------------*/
conversion_function_id:             
	OPERATOR conversion_type_id
	
conversion_type_id:                 
	type_specifier ptr_operator_seq.opt
   | type_specifier conversion_type_id
	
/*
 *  Ctor-initialisers can look like a bit field declaration, given the generalisation of names:
 *      Class(Type) : m1(1), m2(2) { }
 *      NonClass(bit_field) : int(2), second_variable, ...
 *  The grammar below is used within a function_try_block or function_definition.
 *  See simple_member_declaration for use in normal member function_definition.
 */
ctor_initializer.opt:               
	/* empty */
   | ctor_initializer
	
ctor_initializer:                   
	COLON mem_initializer_list
   | COLON mem_initializer_list bang error                         {/* UNBANG("Bad ctor-initializer."); */}
	
mem_initializer_list:               
	mem_initializer
   | mem_initializer_list_head mem_initializer
	
mem_initializer_list_head:          
	mem_initializer_list CM
   | mem_initializer_list bang error CM                         {/* UNBANG("Bad mem-initializer.");*/ }
	
mem_initializer:                    
	mem_initializer_id LP expression_list.opt RP
	
mem_initializer_id:                 
	scoped_id

/*---------------------------------------------------------------------------------------------------
 * A.11 Overloading
 *---------------------------------------------------------------------------------------------------*/
operator_function_id:               
	OPERATOR operator
	
/*
 *  It is not clear from the ANSI standard whether spaces are permitted in delete[]. If not then it can
 *  be recognised and returned as DELETE_ARRAY by the lexer. Assuming spaces are permitted there is an
 *  ambiguity created by the over generalised nature of expressions. operator new is a valid delarator-id
 *  which we may have an undimensioned array of. Semantic rubbish, but syntactically valid. Since the
 *  array form is covered by the declarator consideration we can exclude the operator here. The need
 *  for a semantic rescue can be eliminated at the expense of a couple of shift-reduce conflicts by
 *  removing the comments on the next four lines.
 */
operator:             
	/*++++*/ NEW
   | /*++++*/ DELETE
/* | / ---- / NEW                 %prec SHIFT_THERE
/* | / ---- / DELETE              %prec SHIFT_THERE
/* | / ---- / NEW LB RB                                                 -- Covered by array of OPERATOR NEW */
/* | / ---- / DELETE LB RB                                              -- Covered by array of OPERATOR DELETE */
   | PLUS
   | MINUS
   | MUL
   | DIV
   | MOD
   | ER
   | AND
   | OR
   | NOT
   | BANG
   | ASN
   | LT
   | GT
   | ASS_ADD
   | ASS_SUB
   | ASS_MUL
   | ASS_DIV
   | ASS_MOD
   | ASS_XOR
   | ASS_AND
   | ASS_OR
   | SHL
   | SHR
   | ASS_SHR
   | ASS_SHL
   | EQ
   | NE
   | LE
   | GE
   | LOG_AND
   | LOG_OR
   | INC
   | DEC
   | CM
   | ARROW_STAR
   | ARROW
   | LP RP
   | LB RB

/*---------------------------------------------------------------------------------------------------
 * A.12 Templates
 *---------------------------------------------------------------------------------------------------*/
template_declaration:               
	template_parameter_clause declaration
   | EXPORT template_declaration
	
template_parameter_clause:          
	TEMPLATE LT template_parameter_list GT
	
template_parameter_list:            
	template_parameter
   | template_parameter_list CM template_parameter
	
template_parameter:                 
	simple_type_parameter
   | simple_type_parameter ASN type_id
   | templated_type_parameter
   | templated_type_parameter ASN identifier
   | templated_parameter_declaration
   | bang error                                                  {/* UNBANG("Bad template-parameter."); */}
	
simple_type_parameter:              
	CLASS
/* | CLASS identifier                                            -- covered by parameter_declaration */
   | TYPENAME
/* | TYPENAME identifier                                         -- covered by parameter_declaration */

templated_type_parameter:           
	template_parameter_clause CLASS
   | template_parameter_clause CLASS identifier
	
template_id:                        
	TEMPLATE identifier LT template_argument_list GT
   | TEMPLATE template_id
	
/*
 *  template-argument is evaluated using a templated...expression so that > resolves to end of template.
 */
template_argument_list:             
	template_argument
   | template_argument_list CM template_argument
	
template_argument:                  
	templated_parameter_declaration
/* | type_id                                                     -- covered by templated_parameter_declaration */
/* | template_name                                               -- covered by templated_parameter_declaration */
/* | error                                                       -- must allow template failure to re-search */

/*
 *  Generalised naming makes identifier a valid declaration, so TEMPLATE identifier is too.
 *  The TEMPLATE prefix is therefore folded into all names, parenthesis_clause and decl_specifier_prefix.
 */
/*explicit_instantiation:           
	TEMPLATE declaration */
	
explicit_specialization:            
	TEMPLATE LT GT declaration

/*---------------------------------------------------------------------------------------------------
 * A.13 Exception Handling
 *---------------------------------------------------------------------------------------------------*/
try_block:                          
	TRY compound_statement handler_seq
	
/*function_try_block:                                                                           -- moved near function_block */
handler_seq:                        
	handler
   | handler handler_seq
	
handler:                            
	CATCH LP exception_declaration RP compound_statement
	
exception_declaration:              
	parameter_declaration
	
/*                                  ELLIPSIS                                                    -- covered by parameter_declaration */
throw_expression:                   
	THROW
   | THROW assignment_expression
	
templated_throw_expression:         
	THROW
   | THROW templated_assignment_expression
	
exception_specification:            
	THROW LP RP
   | THROW LP type_id_list RP
	
type_id_list:                       
	type_id
   | type_id_list CM type_id

/*---------------------------------------------------------------------------------------------------
 * Back-tracking and context support
 *---------------------------------------------------------------------------------------------------*/
advance_search:                     
	error               {/* yyerrok; yyclearin; advance_search(); */} /* Rewind and queue '+' or '-' '#' */       
	
bang:                               
	/* empty */         {/* suppress_parse_error = 1; */}   /* set flag to suppress "parse error" */ 
	
mark:                               
	/* empty */         {/* mark(); */}        /* Push lookahead and input token stream context onto a stack */
	
nest:                               
	/* empty */         {/* nest(); */}        /* Push a declaration nesting depth onto the parse stack */
	
start_search:                       
	/* empty */         {/* start_search(false); */}    /* Create/reset binary search context */
	
start_search1:                      
	/* empty */         {/* start_search(true); */}     /* Create/reset binary search context */
	
util:                               
	/* empty */           /* Get current utility mode */

%%

struct TreeNode * alacnary(int symbol, int prodRule, int children,...){
	struct TreeNode * nd;
	nd =  treenode(symbol);
	nd->u.nt.rule = prodRule;
	int c = 0;
	va_list mylist;
	va_start(mylist, children);
	while(c < children){
		nd->u.nt.child[c] = va_arg(mylist, struct node *);
		c++;
	}
	va_end(mylist);
	return nd;
}