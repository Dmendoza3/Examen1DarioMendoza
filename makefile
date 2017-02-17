lab5:	Starks.o Lannister.o Targaryen.o
	g++ Starks.o Lannister.o Targaryen.o -o lab5

lab5.o:	lab5-DarioMendoza.cpp Starks.h Lannister.h Targaryen.h
	g++ -c lab5-DarioMendoza.cpp


Starks.o:	Starks.h Starks.cpp
	g++ Starks.cpp -c


Lannister.o:	Lannister.h Lannister.cpp
	g++ Lannister.cpp -c
	
Targaryen.o:	Targaryen.h Targaryen.cpp
	g++ Targaryen.cpp -c

clean:
	rm *.o lab5 
