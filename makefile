lab5:	Starks.o Lannister.o Targaryen.o
	g++ Starks.o Lannister.o Targaryen.o -o lab5

lab5.o:	lab5-DarioMendoza.cpp Starks.h Lannister.h Targaryen.h
	g++ -c lab5-DarioMendoza.cpp


Starks.o:	PeqFamiliasN.o Starks.h Starks.cpp
	g++ Starks.cpp -c

Lannister.o:	GuardiaReal.o Lannister.h Lannister.cpp
	g++ Lannister.cpp -c
	
Targaryen.o:	Dohtraki.o Targaryen.h Targaryen.cpp
	g++ Targaryen.cpp -c

PeqFamiliasN.o: PeqFamiliasN.h PeqFamiliasN.cpp
	g++ PeqFamiliasN.cpp -c

GuardiaReal.o:	GuardiaReal.h GuardiaReal.cpp
	g++ GuardiaReal.cpp -c

Dohtraki.o:	Dohtraki.h Dohtraki.cpp
	g++ Dohtraki.cpp -c

clean:
	rm *.o lab5 
