
all: mylib.o 
	gcc -o main.exe main.c mylib.o

mylib.o:
	gcc -o mylib.o -c mylib/mylib.c

time-recursive: mylib.o 
	gcc -o main_time_complexity_recursive.out main_time_complexity_recursive.c mylib.o

time-iterative: mylib.o
	gcc -o main_time_complexity_iterative.out main_time_complexity_iterative.c mylib.o

space-recursive: mylib.o 
	gcc -o main_space_complexity_recursive.exe main_space_complexity_recursive.c mylib.o 

space-iterative: mylib.o
	gcc -o main_space_complexity_iterative.exe main_space_complexity_iterative.c mylib.o
	
clear: 
	rm -rf *.out
	rm -rf *.o
	rm -rf *.exe