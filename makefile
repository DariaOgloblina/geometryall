all: main
.PHONY: clean

main: prog.o per.o plo.o
	gcc build/prog.o build/per.o build/plo.o -Wall -Werror -lm  -o bin/geometry1
prog.o: src/prog.c
	gcc src/prog.c -o build/prog.o -c -Wall -Werror

per.o: src/per.c
	gcc  src/per.c -o build/per.o -c -Wall -Werror -lm

plo.o: src/plo.c
	gcc src/plo.c -o build/plo.o -c -Wall -Werror -lm

clean:
	rm -rf build/*.o bin/geometry1
bin:
	mkdir bin

build:
	mkdir build

