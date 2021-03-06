all: main

main: main.o
	g++ main.o -o main

main.o: main.cpp Hash.h
	g++ -c main.cpp -o main.o

clean:
	rm -rf *.o
	rm -rf main

run: all
	./main
