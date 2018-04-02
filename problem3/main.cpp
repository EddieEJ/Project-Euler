/*
 * Problem 3 - Largest prime factor
 * Find the largest prime factor of the number 600851475143.
 * Author Eduard Jusufi
 */

#include <iostream>
#include <vector>
#include <cmath>

using std::vector;
using std::cout;
using std::endl;

int largestPrimeFactor(unsigned long long number) {
    vector<int> allPrimesOfNum;
    unsigned long long providedNumber = number;

    // Divide the number to all primes smaller than sqrt(num) until nothing left.
    for (int i = 2; i <= sqrt(number); i++) {
        if (providedNumber % i == 0) {
            providedNumber /= i;
            allPrimesOfNum.push_back(i);
        }
    }
    return allPrimesOfNum.back();
}

int main() {
    cout << "Largest prime factor of the number 13195 is: " << largestPrimeFactor(13195) << endl;
    cout << "Largest prime factor of the number 600851475143 is: " << largestPrimeFactor(600851475143) << endl;
    return 0;
}