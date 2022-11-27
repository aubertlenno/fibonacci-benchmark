
all: mylib.o 
	gcc -o main.exe main.c mylib.o

mylib.o:
	gcc -o mylib.o -c mylib/mylib.c

time-recursive: mylib.o 
	gcc -o main_b_time_recursive.out main_b_time_recursive.c mylib.o

time-iterative: mylib.o
	gcc -o main_b_time_iterative.out main_b_time_iterative.c mylib.o

space-recursive: mylib.o 
	gcc -o main_b_space_recursive.exe main_b_space_recursive.c mylib.o 

space-iterative: mylib.o
	gcc -o main_b_space_iterative.exe main_b_space_iterative.c mylib.o
	
clear: 
	rm -rf *.out
	rm -rf *.o
	rm -rf *.exe