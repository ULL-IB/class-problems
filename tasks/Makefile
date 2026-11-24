CLASS = task
MAIN = $(CLASS)s

all: $(MAIN)

$(MAIN): $(MAIN).o $(CLASS).o
	g++ -o $@ $^

.PHONY: all clean

clean:
	rm -f *.o $(MAIN)
