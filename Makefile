OS := $(shell uname)
ifeq ($(OS),Darwin)
	CC=gcc-8
else
	CC=gcc
endif
CFLAGS=-std=gnu99 -fopenmp
LDFLAGS=-lm -fopenmp
OBJS=mlp.o

%.o:%.c
	$(CC) -c -o $@ $< $(CFLAGS)

mlp:$(OBJS)
	$(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS)

clean:
	rm *.o mlp
