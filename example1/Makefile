CC	= arm-linux-gnueabihf-gcc
CFLAGS	= -O2 -ggdb -Wall -mcpu=cortex-a15
LDFLAGS = -fno-stack-protector

objects	= example1.o

.PHONY: clean

example1: $(objects)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) -c $(CFLAGS) $(LDFLAGS) -o $@ $<

clean:
	rm -f $(objects) example1

qemu: example1
	@bash cmd
