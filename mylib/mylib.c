#include <stdio.h>

int fibonacciIterative(int N){

    int F0 = 0, F1 = 1, F2;

    if (N == 0){
        return F0;
    }
    else if (N == 1){
        return F1;
    } 
    else {
        for(int i=2; i <= N; i++){
            F2 = F0 + F1;
            F0 = F1;
            F1 = F2;
        }
        return F2;
    }
}

int fibonacciRecursive(int N){
    if (N == 0){
        return 0;
    }
    else if (N == 1){
        return 1;
    }
    else{
        return fibonacciRecursive(N-1) + fibonacciRecursive(N-2);
    }
}