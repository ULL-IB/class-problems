CLASS = chess_piece
MAIN = chess_moves

all: $(MAIN)

$(MAIN): $(MAIN).o $(CLASS).o
	g++ -o $@ $^

.PHONY: all clean

clean:
	rm -f *.o $(MAIN)
