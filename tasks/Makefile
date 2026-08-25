CLASS = task
MAIN = $(CLASS)s

all: $(MAIN)

$(MAIN): $(MAIN).cc $(CLASS).cc
	g++ -o $@ $^

.PHONY: all clean

clean:
	rm -f *.o $(EXEC)
