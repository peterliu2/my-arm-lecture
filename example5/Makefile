CC	= arm-linux-gnueabihf-gcc
CFLAGS	= -O0 -ggdb -Wall
LDFLAGS = -fno-stack-protector
QEMU_ARM = qemu-arm -L /usr/arm-linux-gnueabihf

objects	= example5.o example5_1.o example5_2.o example5_3.o

.PHONY: clean

example5: example5.o
	$(CC) -o $@ $^

example5_1: example5_1.o
	$(CC) -o $@ $^

example5_2: example5_2.o
	$(CC) -o $@ $^

example5_3: example5_3.o
	$(CC) -o $@ $<

%.o: %.c
	$(CC) -c $(CFLAGS) $(LDFLAGS) -o $@ $<


clean:
	rm -f $(objects) example5 example5_1 example5_2  example5_3

qemu: example5
	$(QEMU_ARM) ./$<

qemu_2: example5_2
	$(QEMU_ARM) ./$<

qemu_1: example5_1
	$(QEMU_ARM) ./$<

qemu_3: example5_3
	$(QEMU_ARM) ./$<

