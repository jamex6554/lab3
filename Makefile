lab3:lab_3_1.o
	g++ -o lab3 lab_3_1.o
lab_3_1.o:lab_3_1.cpp
	g++ -c lab_3_1.cpp
clean:
	rm lab3 *.o
