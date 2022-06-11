CC = g++
TARGET1 = 11-1
TARGET2 = 11-3
TARGET3 = f
TARGET4 = g
FLAG = -std=c++11

all: $(TARGET1).cpp $(TARGET2).cpp $(TARGET3).cpp $(TARGET4).cpp
	$(CC) $(FLAG) -c $(TARGET1).cpp $(TARGET2).cpp $(TARGET3).cpp $(TARGET4).cpp
	
	$(CC) $(FLAG) -o $(TARGET2) $(TARGET2).o
	$(CC) $(FLAG) -o $(TARGET1) $(TARGET1).o $(TARGET3).o $(TARGET4).o
	

clean:
	rm -f $(TARGET1) $(TARGET2) 
	rm -f *.o 
