CXX = g++
CXXFLAGS = -std=c++11 -O2

TARGET = mergeSort
SRC = main.cpp

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)