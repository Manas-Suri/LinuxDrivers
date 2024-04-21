obj-m += lll-gpio-driver.o
# .o file is the file that contains the driver functionality

KDIR = /lib/modules/$(shell uname -r)/build

all:
	make -C $(KDIR) M=$(shell pwd) modules
clean:
	make -C $(KDIR) M=$(shell pwd) clean