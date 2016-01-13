CC	= arm-linux-gnueabihf-gcc
CFLAGS	=  -ggdb -Wall
LDFLAGS = -fno-stack-protector

objects	= example4.o

.PHONY: default clean

example4: $(objects)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) -c $(CFLAGS) $(LDFLAGS) -o $@ $<

clean:
	rm -f $(objects) example4

qemu: example4
	qemu-arm -L /usr/arm-linux-gnueabihf ./example4
