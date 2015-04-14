Clock: Clock.o main.o
	g++ -o Clock Clock.o main.o
Clock.o: Clock.cpp Clock.h
	g++ -c Clock.cpp
main.o: main.cpp Clock.h
	g++ -c main.cpp
clean:
	rm Clock *.o

