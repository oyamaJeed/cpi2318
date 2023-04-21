TARGET := test2
SUB := display.c
SRC := $(TARGET).c
SOBJ := lib$(TARGET).so


CFLAGS := -g -Wall 
CC := gcc $(CFLAGS)


all : $(TARGET)


$(TARGET): $(SRC) $(SUB)
	$(CC) -shared $(SUB) -fPIC -o $(SOBJ)
	$(CC) -o $@ $(SRC) -L. -l$(TARGET)

clean:
	rm -f $(SOBJ) $(TARGET) 
	
