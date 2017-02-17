lab5:	Starks.o Lannister.o Targaryen.o PeqFamiliasN.o GuardiaReal.o Dohtraki.o lab5-DarioMendoza.o
	g++ Starks.o Lannister.o Targaryen.o PeqFamiliasN.o GuardiaReal.o Dohtraki.o lab5-DarioMendoza.o -o lab5

lab5-DarioMendoza.o:	lab5-DarioMendoza.cpp Starks.h Lannister.h Targaryen.h PeqFamiliasN.h GuardiaReal.h Dohtraki.h
	g++ -c lab5-DarioMendoza.cpp


Starks.o:	Starks.h Starks.cpp
	g++ Starks.cpp -c

Lannister.o:	Lannister.h Lannister.cpp
	g++ Lannister.cpp -c
	
Targaryen.o:	Targaryen.h Targaryen.cpp
	g++ Targaryen.cpp -c

PeqFamiliasN.o: PeqFamiliasN.h PeqFamiliasN.cpp
	g++ PeqFamiliasN.cpp -c

GuardiaReal.o:	GuardiaReal.h GuardiaReal.cpp
	g++ GuardiaReal.cpp -c

Dohtraki.o:	Dohtraki.h Dohtraki.cpp
	g++ Dohtraki.cpp -c

clean:
	rm *.o lab5 
