CC = gcc
TARGET = a.out
CFLAGS = -W -Wall -Iinclude
SRC = $(shell find src -name '*.c')
OBJ = $(SRC:.c=.o)

all :	$(TARGET)

$(TARGET) : $(OBJ)
	$(CC) $(OBJ) -o $(TARGET) -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(TARGET) $(OBJ)

fclean : clean

re : fclean all
