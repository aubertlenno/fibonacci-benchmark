# Fibonacci Benchmarking Using Iterative and Recursive Approach

In this repo, I will compare the **Time Complexity** and **Space Complexity** of finding the Fibonacci number of the N<sup>th</sup> sequence with **Iterative** and **Recursive** approach.

Let's start with the definition of Fibonacci Sequence.



## Fibonacci Sequence

The Fibonacci sequence is a set of integers (the Fibonacci numbers) that starts with a zero (0), followed by a one (1), then by another one, and then by a series of steadily increasing numbers. The sequence follows the rule that each number is equal to the sum of the preceding two numbers.

For a better understanding, take a look at the illustration below

![Fibonacci Illustration](./images/fibonacci-sequence-illustration.png)

As you can see, in Fibonacci sequence to determine the N<sup>th</sup> sequence, the formula is
$$
F(N) = F(N-1) + F(N-2)
$$


## Recursion and Iteration

Iteration and Recursion are different ways to execute a set of instructions repeatedly.

#### Recursion

The process of repeating actions in a similar way is referred to as recursion. Recursion is the process of calling a function within its own code in computer science. A recursive function is any function that calls itself, and recursive calls are function calls that do the same. Recursive functions are useful for many different types of problem-solving, including making the Fibonacci series.

Here's the example of finding the Fibonacci number of the N<sup>th</sup> sequence with recursive approach.

```c
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
```

#### Iteration

In Iteration, there is the usage of loops to execute the set of instructions repetitively until the condition of the iteration statement becomes false.

Here's the example of finding the Fibonacci number of the N<sup>th</sup> sequence with iterative approach.

```c
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
```



## Testing

Now, I will show you how to test the code by running it and compare the result of both approaches.

First, 