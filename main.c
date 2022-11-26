#include <stdio.h>
#include "mylib/mylib.h"

int main(void){

    int N;
    printf("Enter the Nth sequence of the fibonacci number sequence: ");
    scanf("%d", &N);

    printf("The fibonacci number of the %dth sequence is %d (Iterative)\n", N, fibonacciIterative(N));
    printf("The fibonacci number of the %dth sequence is %d (Recursive)\n", N, fibonacciRecursive(N));


    for (int i = 0; i <= N; i++){
        if (fibonacciIterative(i) != fibonacciRecursive(i)) {
            printf("ERROR at %i\n",i);
        } else {
            printf("The fibonacci number F%d = %d = %d\n", i, fibonacciIterative(i), fibonacciRecursive(i));
        }
    }
    
    return 0;
}