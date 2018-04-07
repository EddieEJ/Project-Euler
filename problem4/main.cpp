/*
 * Problem 4 - Largest palindrome product
 * Find the largest palindrome made from the product of two 3-digit numbers.
 * Author Eduard Jusufi
 */

#include <iostream>
#include <algorithm>
#include <string>

using std::string;
using std::cout;
using std::endl;

int largestPalindrome(int size) {
    // Biggest numbers depending on given size.
    string tempNum1;
    string tempNum2;
    for(int i=1; i <= size; i++) {
        tempNum1 += "9";
        tempNum2 += "9";
    }
    // Convert string to int.
    int num1 = atoi(tempNum1.c_str());
    int num2 = atoi(tempNum2.c_str());

    //Hold record of biggest palindrome.
    int maxPalindrome = 0;
    // Inefficient for palindromes formed by 5+ digit numbers.
    for(int i=num1; i > 0; i--) {
        for(int k = num2; k > 0; k--) {
            string result = std::to_string(i*k);
            string firstPart = result.substr(0, result.length()/2);
            string secondPart = result.substr(result.length()/2);
            std::reverse(secondPart.begin(), secondPart.end());
            int palindrome = atoi(result.c_str());
            if(firstPart == secondPart && maxPalindrome < palindrome) {
                maxPalindrome = palindrome;
            }
        }
    }
    return maxPalindrome;
}

int main() {
    cout << "Largest palindrome made from two 2-digit numbers: " << largestPalindrome(2) << endl;
    cout << "Largest palindrome made from two 3-digit numbers: " << largestPalindrome(3) << endl;
    return 0;
}