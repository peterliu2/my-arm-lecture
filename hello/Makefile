AS	= arm-linux-gnueabihf-as
LD	= arm-linux-gnueabihf-ld
SFLAGS  = 
LDFLAGS =

objects	= hello.o

.PHONY: clean

hello: $(objects)
	$(LD) $(LDFLAGS) -o $@ $^

%.o: %.s
	$(AS) -c $(SFLAGS) -o $@ $<

clean:
	-rm -f $(objects) hello

qemu: hello
	qemu-arm ./hello
