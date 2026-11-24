CLASS = graph
MAIN = $(CLASS)_main

all: $(MAIN)

$(MAIN): $(MAIN).o $(CLASS).o
	g++ -o $@ $^

.PHONY: all clean

clean:
	rm -f *.o $(MAIN)
