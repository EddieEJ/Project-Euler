/*
 * Problem 2 - Even Fibonacci numbers
 * Find the sum of the even-valued Fibonacci terms whose values do not exceed four million.
 * Author Eduard Jusufi
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int sumOfEvenFibonacci() {

    // Initialize first Fibonacci numbers.
    vector<int> fibonacciTerms = {1, 2};
    vector<int> evenFibonacciTerms = {2};
    int sumOfEvenFib = 2;

    while(fibonacciTerms.end()[-1] <= 4000000) {
        // Next Fibonacci term is the sum of the last 2 in the vector.
        int currentTerm = fibonacciTerms.end()[-2] + fibonacciTerms.end()[-1];
        fibonacciTerms.push_back(currentTerm);
        if(currentTerm % 2 == 0) {
            evenFibonacciTerms.push_back(currentTerm);
            sumOfEvenFib += currentTerm;
        }
    }

    return sumOfEvenFib;
}

int main() {
    cout << "Sum of the even-valued Fibonacci terms whose values do not exceed four million: " << sumOfEvenFibonacci() << endl;
    return 0;
}