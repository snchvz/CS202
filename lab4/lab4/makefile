Person.o: Person.h Person.cpp
	g++ -c Person.cpp
Person: Person.o Person_main.cpp
	g++ -o Person Person.o Person_main.cpp
clean:
	rm *.o Person
