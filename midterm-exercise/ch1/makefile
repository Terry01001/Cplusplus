CC = g++
TARGET1 = 1-8
TARGET2 = 1-13
FLAG = -std=c++11

all: $(TARGET1).cpp $(TARGET2).cpp 
	$(CC) $(FLAG) -c $(TARGET1).cpp $(TARGET2).cpp 
	$(CC) $(FLAG) -o $(TARGET1) $(TARGET1).o 
	$(CC) $(FLAG) -o $(TARGET2) $(TARGET2).o

clean:
	rm -f $(TARGET1) $(TARGET2) 
	rm -f $(TARGET1).o $(TARGET2).o 
