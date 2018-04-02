/*
 * Problem 1 - Multiples of 3 and 5
 * Sum of all the multiples of 3 or 5 below 1000.
 * Author Eduard Jusufi
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

/**
 * Find the sum of all multiples of 3 or 5 below a provided upperBound.
 * @param upperBound - up to this number(excluding it), find multiples of 3 or 5
 * @return - sum of all numbers multiple of 3 or 5 below the provided upperBound
 */
int sumMultiples(int upperBound) {
    vector<int> allNumbers;

    for(int i = 0; i < upperBound; i++) {
        // Else if so we do not get repeated numbers in vector. i.e. 15, 30, 45.
        if(i % 3 == 0) {
            allNumbers.push_back(i);
        } else if(i % 5 == 0) {
            allNumbers.push_back(i);
        }
    }

    int sumOfAllMultiples = 0;
    for(auto num : allNumbers) {
        sumOfAllMultiples += num;
    }

    return sumOfAllMultiples;
}

int main() {
    cout << "Sum of all multiples of 3 or 5 below 10 is: " << sumMultiples(10) << endl;
    cout << "Sum of all multiples of 3 or 5 below 1000 is: " << sumMultiples(1000) << endl;
    return 0;
}