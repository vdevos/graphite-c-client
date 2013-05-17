CFLAGS+=-Wall -g

all: client

client: graphite-client.o
	$(CC) -o $@ graphite-client.o client.c

graphite-client.o:	graphite-client.h graphite-client.c

clean:
	rm -f *.o client
