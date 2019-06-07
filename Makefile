CC=gcc
CFLAGS=-std=gnu99
LDFLAGS=-lm
OBJS=mlp.o

%.o:%.c
	$(CC) -c -o $@ $< $(CFLAGS)

mlp:$(OBJS)
	$(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS)

clean:
	rm *.o mlp
