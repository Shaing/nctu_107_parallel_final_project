CC=gcc-8
CFLAGS=-std=c11
LDFLAGS= -lm
OBJS=mlp.o

%.o:%.c
	$(CC) -c -o $@ $< $(CFLAGS)

mlp:$(OBJS)
	$(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS)

clean:
	rm *.o mlp
