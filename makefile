CC = gcc
CFLAGS = -c -r

120++ : token.o 120lex.o errors.o lex.yy.o
	$(CC) -o 120++ lex.yy.o token.o errors.o 120lex.o

token.o : token.c
	$(CC) $(CFLAGS) token.c
	
errors.o : errors.c
	$(CC) $(CFLAGS) errors.c
	
120lex.o : 120lex.c token.c
	$(CC) $(CFLAGS) 120lex.c
	
lex.yy.o : lex.yy.c 
	$(CC) $(CFLAGS) lex.yy.c

lex.yy.c : clex.l ytab.h token.c errors.c
	flex clex.l
