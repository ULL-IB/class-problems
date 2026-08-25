CLASS = polinomio
MAIN = integral

all: $(MAIN)

$(MAIN): $(MAIN).cc $(CLASS).cc
	g++ -o $@ $^

.PHONY: all clean

clean:
	rm -f *.o $(EXEC)
