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

int main()
{
    std::cout << "Hello World!" << std::endl;
    std::cout << "5! = " << factorial(5) << std::endl;
    return 0;
}
