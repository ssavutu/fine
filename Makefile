fine: main.o
	cc main.o -o fine
main.o: main.c
	cc -c main.c