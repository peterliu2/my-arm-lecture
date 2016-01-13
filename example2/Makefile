CC	= arm-linux-gnueabihf-gcc
AS	= arm-linux-gnueabihf-as
CFLAGS	= -ggdb -Wall
LDFLAGS = -fno-stack-protector

objects	= example2.o multiply.o

.PHONY: clean

example2: $(objects)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) -c $(CFLAGS) $(LDFLAGS) -o $@ $<

%.o: %.s
	$(AS) -o $@ $<

clean:
	rm -f $(objects) example2

qemu: example2
	qemu-arm -L /usr/arm-linux-gnueabihf ./example2
