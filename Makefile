OS := $(shell uname)
ifeq ($(OS),Darwin)
	CC=g++-8
else
	CC=g++
endif
CFLAGS=-std=c++11
LDFLAGS=-lm
OBJS=mlp.o

%.o:%.c
	$(CC) -c -o $@ $< $(CFLAGS)

mlp:$(OBJS)
	$(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS)

clean:
	rm *.o mlp
