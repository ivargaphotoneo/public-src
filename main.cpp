#include <iostream>

// Returns n! for 0 <= n <= 20 (larger values overflow unsigned long long).
unsigned long long factorial(unsigned int n)
{
    unsigned long long result = 1;
    for (unsigned int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Returns the n-th Fibonacci number (F(0) = 0, F(1) = 1) for 0 <= n <= 93
// (larger values overflow unsigned long long).
unsigned long long fibonacci(unsigned int n)
{
    unsigned long long prev = 0;
    unsigned long long curr = 1;
    if (n == 0) {
        return 0;
    }
    for (unsigned int i = 1; i < n; ++i) {
        const unsigned long long next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}

int main()
{
    std::cout << "Hello World!" << std::endl;
    std::cout << "5! = " << factorial(5) << std::endl;
    std::cout << "fib(10) = " << fibonacci(10) << std::endl;
    return 0;
}
