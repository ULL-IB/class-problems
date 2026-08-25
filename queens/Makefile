CLASS = corona.cc reina.cc
MAIN = reinas

all: $(MAIN)

$(MAIN): $(MAIN).cc $(CLASS)
	g++ -o $@ $^

.PHONY: all clean

clean:
	rm -f *.o $(EXEC)
