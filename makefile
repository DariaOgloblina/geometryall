CC=gcc
CFLAGS=-Wall -Werror 
EXECUTABLE=geometry1
SOURCES=prog.c plo.c per.c
OBJECTS=$(SOURCES:.c=.o)
.PHONY: clean
all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@ -lm

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@ -lm
clean:
	rm-rf *.o geometry1
