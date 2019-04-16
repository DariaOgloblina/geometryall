: main
.PHONY: clean

main: prog.o per.o plo.o peres.o
	gcc build/src/prog.o build/src/per.o build/src/plo.o build/src/peres.o -Wall -Werror -lm  -o bin/geometry1
prog.o: src/prog.c
	gcc src/prog.c -o build/src/prog.o -c -Wall -Werror -lm

per.o: src/per.c
	gcc  src/per.c -o build/src/per.o -c -Wall -Werror -lm
plo.o: src/plo.c
	gcc src/plo.c -o build/src/plo.o -c -Wall -Werror -lm
peres.o: src/peres.c
	gcc src/peres.c -o build/src/peres.o -c -Wall -lm
test: bin/geometry_test

bin/geometry_test: build/test/main.o build/test/plo.o build/test/per.o build/test/peres.o
	gcc -Wall -Werror build/test/main.o build/test/plo.o build/test/per.o build/test/peres.o -o bin/geometry_test -lm
build/test/main.o: test/main.c
	gcc -Wall -Werror -c -I thirdparty -I src test/main.c -o build/test/main.o

build/test/plo.o: src/plo.c src/foo.h
	gcc -Wall -Werror -c -I thirdparty -I src src/plo.c -o build/test/plo.o
build/test/per.o: src/per.c src/foo.h
	gcc -Wall -Werror -c -I thirdparty -I src src/per.c -o build/test/per.o
build/test/peres.o: src/peres.c src/foo.h
	gcc -Wall -Werror -c -I thirdparty -I src src/peres.c -o build/test/peres.o

clean:
	rm -rf build/*.o bin/geometry1



