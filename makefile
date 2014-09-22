CC = gcc
CFLAGS = -c -r

120++ : cparser.tab.o lex.yy.o token.o errors.o 120lex.o 120parse.o
	$(CC) -o 120++ cparser.tab.o lex.yy.o token.o errors.o 120lex.o 120parse.o

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
	
cparser.tab.o : cparser.tab.c
	$(CC) $(CFLAGS) cparser.tab.c
	
cparser.tab.c : cparser.y
	bison -dv cparser.y


