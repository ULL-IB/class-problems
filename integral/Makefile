CLASS = polinomio
MAIN = integral

all: $(MAIN)

$(MAIN): $(MAIN).o $(CLASS).o
	g++ -o $@ $^

.PHONY: all clean

clean:
	rm -f *.o $(MAIN)
