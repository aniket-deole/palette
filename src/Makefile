CPP=g++
CFLAGS=-g -rdynamic -O0 -Wall `pkg-config sigc++-2.0 gtk+-3.0 gtkmm-3.0 gdkmm-3.0 --cflags` -Iinclude/

TGT=palette
OBJS= main.o palette.o utils.o windowbody.o maintoolbar.o

all : ${OBJS}
		${CPP} ${CFLAGS} -o ${TGT} ${OBJS} `pkg-config sigc++-2.0 gtk+-3.0 gtkmm-3.0 --libs` -Iinclude/

%.o : %.cc
	${CPP} ${CFLAGS} -Iinclude/ -c $<

.PHONY: clean
clean:
	rm -rf *.o palette

test: all
	./palette

install: all
	cp palette /usr/bin/palette

debug: all
	gdb --tui ./palette

