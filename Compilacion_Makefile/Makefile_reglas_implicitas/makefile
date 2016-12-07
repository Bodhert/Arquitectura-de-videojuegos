CC=g++
CXXFLAGS=-Iheaders
LDFLAGS=-L.
LDLIBS=-lfigures

LIB_OBJECTS=Square.o Triangle.o Circle.o

all: libfigures.a main

libfigures.a: $(LIB_OBJECTS)
	$(AR) r $@ $^

clean:
	$(RM) *.o *.a main
