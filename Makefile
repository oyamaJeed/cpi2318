TARGET := test2
SUB := display.c
SRC := $(TARGET).c


CFLAGS := -g -Wall 
CC := gcc $(CFLAGS)


all : $(TARGET)


$(TARGET): $(SRC) $(SUB)
	$(CC) -shared $(SUB) -fPIC -o libdlink.so
	$(CC) -o $@ $(SRC) -L. -ldlink

clean:
	rm -f libdlink.so $(TARGET) 
	
