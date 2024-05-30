CC = gcc
CFLAGS = -Wall -Wextra -I../libmysyslog
TARGET = libmysyslog-daemon

all: $(TARGET)

$(TARGET): libmysyslog-daemons.o
	$(CC) -o $(TARGET) libmysyslog-daemon.o $(LDFLAGS)

libmysyslog.o: libmysyslog.c
	$(cc) $(CFLAGS) -c libmysyslog-daemon.c

clean:
	rm -f $(TARGET) *.o

.PHONY: all clean
