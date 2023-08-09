CC = gcc
OGFLAGS = -Og
O1FLAGS = -O1
CFLAGS = $(OFLAGS) -Wall -g

CINC =
F64 =-m64


%.s: %.c
	$(CC) $(OGFLAGS) $(CINC) -S $(F64) $<

%_opt01.s: %.c
	$(CC) $(O1FLAGS) $(CINC) -S $(F64) $< -o $*_optO1.s

# %_opt00.s: %.c
# 	$(CC) $(OGFLAGS) $(CINC) -S $(F64) $< -o $*_opt00.s

%.d: %.c
	$(CC) $(CFLAGS) $(CINC) $(F64) $< -o $*
	objdump -d $* > $@


all: files

files:	loops.s loops_main.d

clean:
	rm -f *.s *d. *.opt00_s *.opt01_s
