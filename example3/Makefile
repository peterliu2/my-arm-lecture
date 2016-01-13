CC	= arm-linux-gnueabihf-gcc
CFLAGS	= -ggdb -Wall -mcpu=cortex-a14
LDFLAGS = -fno-stack-protector

objects	= example3.o

.PHONY: clean

example3: $(objects)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) -c $(CFLAGS) $(LDFLAGS) -o $@ $<

clean:
	rm -f $(objects) example3

qemu: example3
	qemu-arm -L /usr/arm-linux-gnueabihf ./example3
