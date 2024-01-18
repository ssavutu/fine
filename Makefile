fine: main.o tokenize.o
	cc main.o -o fine
main.o: main.c
	cc -c main.c
tokenize.o: tokenize.c
	cc -c tokenize.c
