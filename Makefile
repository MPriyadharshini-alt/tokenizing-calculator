CC     = gcc
CFLAGS = -Wall -Wextra -std=c11 -g

SRC    = src/main.c src/lexer.c src/eval.c

calc: $(SRC)
	gcc -Wall -Wextra -std=c11 -g -o calc $(SRC) -lm

clean:
	del /Q calc.exe