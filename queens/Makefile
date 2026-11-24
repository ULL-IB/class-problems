CLASS = corona.o reina.o
MAIN = reinas

all: $(MAIN)

$(MAIN): $(MAIN).o $(CLASS)
	g++ -o $@ $^

.PHONY: all clean

clean:
	rm -f *.o $(MAIN)
