LIB_OBJECTS=Square.o Triangle.o Circle.o

all: main

main: main.o libfigures.a
	g++ $< -L. -lfigures -o $@

libfigures.a: $(LIB_OBJECTS)
	ar rs $@ $^

%.o: %.cpp
	g++ -Iheaders -c $<

clean:
	$(RM) *.o *.a main
