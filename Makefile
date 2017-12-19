#
# Realtek Semiconductor Corp.
#

.PHONY: all romfs clean
all:
	cd gdb-7.12; \
	make -j12 ; make install;
	cd gdb-7.12/gdb/gdbserver; \
	make -j12 ;

romfs:
	$(ROMFSINST) ./gdb-7.12/gdb/gdbserver/gdbserver /bin/gdbserver;

clean:
	cd ./gdb-7.12; make clean; \
	cd ./gdb/gdbserver; make clean;
