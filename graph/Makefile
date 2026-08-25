CLASS = graph
MAIN = $(CLASS)_main

all: $(MAIN)

$(MAIN): $(MAIN).cc $(CLASS).cc
	g++ -o $@ $^

.PHONY: all clean

clean:
	rm -f *.o $(EXEC)
