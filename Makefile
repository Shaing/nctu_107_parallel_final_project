Q := @
OS := $(shell uname)
ifeq ($(OS),Darwin)
	CC := gcc-8
else
	CC := gcc
endif
CFLAGS := -std=c11
LDFLAGS := -lm
SRC	:= $(wildcard *.c)
OUT	:= mlp

.PHONY: all clean

all: $(OUT)
$(OUT):	$(SRC)
	$(Q) echo "make $(OUT)"
	$(Q) $(CC) $(CFLAGS) $(LDFLAGS) $(SRC) -o $(OUT) 	

clean:
	$(Q) echo "clean $(OUT)"
	$(Q) rm $(OUT) *.o 