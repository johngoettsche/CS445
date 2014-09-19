CC = gcc
CFLAGS = -c -r

120++ : parser.tab.o lex.yy.o token.o errors.o 120lex.o 
	$(CC) -o 120++ parser.tab.o lex.yy.o token.o errors.o 120lex.o

token.o : token.c
	$(CC) $(CFLAGS) token.c
	
errors.o : errors.c
	$(CC) $(CFLAGS) errors.c
	
120lex.o : 120lex.c token.c
	$(CC) $(CFLAGS) 120lex.c
	
120parse.o : 120parse.c 
	$(CC) $(CFLAGS) 120parse.c
	
lex.yy.o : lex.yy.c 
	$(CC) $(CFLAGS) lex.yy.c

lex.yy.c : clex.l ytab.h token.c errors.c
	flex clex.l
	
parser.tab.o : parser.tab.c
	$(CC) $(CFLAGS) parser.tab.c
	
parser.tab.c : parser.y
	bison -d parser.y


