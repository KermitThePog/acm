CC=gcc

%.exe: %.c
	$(CC) $< -o $@
