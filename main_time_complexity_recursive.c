#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"


int main(void){

    const int N = 30;
    
    float startTime = (float)clock()/CLOCKS_PER_SEC;

    for (unsigned int i = 0; i < N; i++) {
        fibonacciRecursive(i);
    }

    float endTime = (float)clock()/CLOCKS_PER_SEC;
    double time_taken = endTime - startTime;

    printf("Time elapsed with recursive approach and N = %d is %f s\n",N,time_taken);

    return 0;
}