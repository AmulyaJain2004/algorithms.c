CC = gcc
CFLAGS = -Wall -g
TARGET = test_list

all: $(TARGET)

test_list: src/list.c tests/test_list.c
	$(CC) $(CFLAGS) -Iinclude src/list.c tests/test_list.c -o test_list

clean:
	rm -f $(TARGET)
