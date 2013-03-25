# Makefile for 2.6 kernels

KERNEL_DIR=/home/lowi/git/a/tf700t_kernel

obj-m := frandom.o

PWD := $(shell pwd)

default:
	$(MAKE) ARCH=arm CROSS_COMPILE=/home/lowi/arm-2012.03/bin/arm-none-eabi- -C $(KERNEL_DIR) SUBDIRS=$(PWD) modules

clean:
	$(MAKE) -C $(KERNEL_DIR) SUBDIRS=$(PWD) clean
