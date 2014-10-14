SRC=blink_led.c

CC=sdcc
FAMILY=pic14
PROC=16f886

all: $(SRC:.c=.hex)

$(SRC:.c=.hex): $(SRC)
	$(CC) --use-non-free -m$(FAMILY) -p$(PROC) $^

clean:
	rm -f $(SRC:.c=.asm) $(SRC:.c=.cod) $(SRC:.c=.hex) $(SRC:.c=.lst) $(SRC:.c=.o)

.PHONY: all clean
