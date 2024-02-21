CC = gcc
CFLAGS = -Wall

mylang_compiler: lexer.o parser.o codegen.o main.o
	$(CC) $(CFLAGS) -o mylang_compiler lexer.o parser.o codegen.o main.o

lexer.o: lexer.c lexer.h
	$(CC) $(CFLAGS) -c lexer.c

parser.o: parser.c parser.h lexer.h
	$(CC) $(CFLAGS) -c parser.c

codegen.o: codegen.c codegen.h parser.h
	$(CC) $(CFLAGS) -c codegen.c

main.o: main.c lexer.h parser.h codegen.h
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f mylang_compiler *.o
