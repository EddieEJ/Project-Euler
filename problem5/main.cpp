/*
 * Problem 5 - Smallest multiple
 * Find the smallest positive number that is evenly divisible by all of the numbers from 1 to 20
 * Author Eduard Jusufi
 */

#include <iostream>

using std::cout;
using std::endl;

int findSmallestMultiple(int upperBound) {

    int smallestMultiple = 0;
    while(true) {
        if(upperBound >= 10) {
            // Increase by 10 since only a number ending with 0 is evenly divisible by 10
            smallestMultiple = smallestMultiple + 10;
        } else if (upperBound >= 5) {
            // Analogically same stands for 5
            smallestMultiple = smallestMultiple + 5;
        } else {
            smallestMultiple = smallestMultiple + 1;
        }
        bool isDivisible = true;

        for(int i = 1; i < upperBound; i++) {
            if(!(smallestMultiple % i == 0)) {
                isDivisible = false;
                break;
            }
        }
        if(isDivisible) {
            return smallestMultiple;
        }
    }
}

int main() {
    cout << "Smallest positive number evenly divisible by all numbers from 1 to 10: " << findSmallestMultiple(10) << endl;
    cout << "Smallest positive number evenly divisible by all numbers from 1 to 20: " << findSmallestMultiple(20) << endl;
    return 0;
}