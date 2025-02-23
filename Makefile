CC := gcc
src_files := ./src/*.c ./src/*.h
C_FLGS := -x c -o cplay

debug:
	$(CC) $(C_FLGS) -ggdb3 $(src_files)

build:
	$(CC) $(C_FLGS) $(src_files)

.PHONY: clean
clean:
	rm -f cplay
