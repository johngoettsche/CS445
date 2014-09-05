CC = gcc
CFLAGS = -c -r

120++ : token.o 120lex.o lex.yy.o
	$(CC) -o 120++ lex.yy.o token.o 120lex.o

token.o : token.c
	$(CC) $(CFLAGS) token.c
	
120lex.o : 120lex.c token.c
	$(CC) $(CFLAGS) 120lex.c
	
lex.yy.o : lex.yy.c 
	$(CC) $(CFLAGS) lex.yy.c

lex.yy.c : clex.l ytab.h token.c
	flex clex.l
