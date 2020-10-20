assigment4: assigment4.o
	gcc -o assigment4 assigment4.o

assigment4.o: assigment4.c ./include/assigment4.h
	gcc -c assigment4.c


.PHONY: clean
clean:
	rm assigment4 *.o
