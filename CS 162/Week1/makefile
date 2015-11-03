#Makefile
#target all: compiles all of the assignments
all: g.cpp g.h f.cpp f.h lab1_2.cpp pointSort.cpp
	g++ -std=c++0x  g.cpp g.h f.cpp f.h lab1_2.cpp  -o function 
	g++ -std=c++0x pointSort.cpp -o Sort

#target one: compiles lab1_2.cpp files needed
one: g.cpp g.h f.cpp f.h lab1_2.cpp
	g++ -std=c++0x  g.cpp g.h f.cpp f.h lab1_2.cpp  -o function 
#target two: compiles pointSort.cpp
two: g++ -std=c++0x pointSort.cpp
	g++ -std=c++0x pointSort.cpp -o Sort
#removes function and sort files
clean:
	rm -rf *o function
	rm -rf *o Sort