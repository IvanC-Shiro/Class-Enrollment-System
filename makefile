CXXFLAGS = -std=c++17

all: ixc3303_main ixc3303_Course ixc3303_Catalog ixc3303_Hybrid ixc3303_Online ixc3303_In_Person
	$(CXX) $(CXXFLAGS) ixc3303_Course.o ixc3303_main.o ixc3303_Catalog.o ixc3303_Hybrid.o ixc3303_Online.o ixc3303_In_Person.o
	./a.out
ixc3303_main: ixc3303_main.cpp ixc3303_Course.h ixc3303_Catalog.h ixc3303_Hybrid.h ixc3303_Online.h ixc3303_In_Person.h
	$(CXX) $(CXXFLAGS) -c ixc3303_main.cpp
ixc3303_Catalog: ixc3303_Catalog.h ixc3303_Catalog.cpp ixc3303_Course.h
	$(CXX) $(CXXFLAGS) -c ixc3303_Catalog.cpp
ixc3303_Course: ixc3303_Course.h ixc3303_Course.cpp
	$(CXX) $(CXXFLAGS) -c ixc3303_Course.cpp
ixc3303_Hybrid: ixc3303_Hybrid.h ixc3303_Hybrid.cpp ixc3303_Online.h ixc3303_In_Person.h ixc3303_Course.h 
	$(CXX) $(CXXFLAGS) -c ixc3303_Hybrid.cpp
ixc3303_Online: ixc3303_Online.h ixc3303_Online.cpp ixc3303_Course.h
	$(CXX) $(CXXFLAGS) -c ixc3303_Online.cpp
ixc3303_In_Person: ixc3303_In_Person.h ixc3303_In_Person.cpp ixc3303_Course.h
	$(CXX) $(CXXFLAGS) -c ixc3303_In_Person.cpp
clean:
	rm -f *.o a.out
