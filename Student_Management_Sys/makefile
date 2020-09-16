HeapStudents: main.o Student.o Address.o Date.o
	g++ -g main.o Student.o Address.o Date.o -o HeapStudents
main.o: main.cpp Student.h Address.h Date.h
	g++ -g -c main.cpp
Student.o: Student.h Student.cpp
	g++ -g -c Student.cpp
Address.o: Address.h Address.cpp
	g++ -g -c Address.cpp
Date.o: Date.h Date.cpp
	g++ -g -c Date.cpp
clean o:
	rm -f *.o
	rm HeapStudents
clean f:
	rm fullReport.dat
	rm shortReport.dat
	rm alphaFullReport.dat
	rm alphaShortReport.dat
clean:
	rm -f *.o
	rm fullReport.dat
	rm shortReport.dat
	rm alphaFullReport.dat
	rm alphaShortReport.dat
	rm HeapStudents
run: HeapStudents
	./HeapStudents
val: HeapStudents
	valgrind --leak-check=full ./HeapStudents
val -l: HeapOfStudents
	valgrind --leak-check=full -v ./HeapStudents

