//
// Created by Shaobo LIU on 2023/8/25.
//

#include<iostream>
#include<vector>
#include<chrono>

using namespace std;

/*
 my answer.
 first, if the input number < 0, return false.
 second, if the input number > 0, then compute the number of digits.
 third, if x_digits==1, return true.
 fourth, else: save each digit into a array, then compare from the middle to both sides in sequence.
*/
class MySolution {
public:
    // the function of computing the number of digits
    int computeDigits(int x) {
        int digits = 1;
        while (x / 10) {  // Wonderful! if x/10=0, break the while
            digits++;
            x = x / 10;
        }
        return digits;
    }

    bool isPalindrome(int x) {
        if (x < 0)
            return false;  // first
        else {
            int x_digits = computeDigits(x);  // second
            if (x_digits == 1)
                return true;  // third
            else {  // fourth
                int number[x_digits];
                for (int i = x_digits - 1; i >= 0; i--) {
                    number[i] = x % 10;
                    x = x / 10;
                }
                int middle = (x_digits - 1) / 2;
                if (x_digits % 2 == 0) {  // x_digits is even
                    int former = middle;
                    int latter = middle + 1;
                    for (int j = 0; j <= (x_digits - 1) / 2; j++) {
                        if (number[former] != number[latter]) {
                            return false;
                        } else {
                            former--;
                            latter++;
                        }
                    }
                    return true;
                } else {  // x_digits is odd
                    int former = middle - 1;
                    int latter = middle + 1;
                    for (int j = 0; j < (x_digits - 1) / 2; j++) {
                        if (number[former] != number[latter]) {
                            return false;
                        } else {
                            former--;
                            latter++;
                        }
                    }
                    return true;
                }
            }
        }
    }
};

/*
    improved position:
    1. NOT use string! just invert(flip) the number and compare
    2. flipping the half of the number is OK. it avoids to above the int.MAX
*/
class ImprovedSolution1 {
public:
    bool isPalindrome(int x) {

        // negative number and the last digit of the number(itself is not 0) is 0
        // both not palindrome number
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        // x = x / 10, more and more small
        // revertedNumber is more and more big
        // when revertedNumber >= x, it reaches half the number
        int revertedNumber = 0;
        while (x > revertedNumber) {
            revertedNumber = x % 10 + revertedNumber * 10;
            x /= 10;
        }

        // when x is odd, invert the revertedNumber to divide 10(middle digit don't influence the result) and compare
        // when x is even, just compare x and the revertedNumber
        return x == revertedNumber || x == revertedNumber / 10;  // wonderful！
    }
};

int main() {
    int x = 123;

    auto my_start = chrono::high_resolution_clock::now();
    MySolution ms;
    bool myAnswer = ms.isPalindrome(x);
    auto my_end = chrono::high_resolution_clock::now();
    auto my_duration = chrono::duration_cast<chrono::microseconds>(my_end - my_start);
    string myAnswers = myAnswer ? "true" : "false";
    cout << "my answer: " << myAnswers << ". time: " << my_duration.count() << " microseconds" << endl;

    auto improved1_start = chrono::high_resolution_clock::now();
    ImprovedSolution1 is1;
    bool improvedAnswer1 = is1.isPalindrome(x);
    auto improved1_end = chrono::high_resolution_clock::now();
    auto improved1_duration = chrono::duration_cast<chrono::microseconds>(my_end - my_start);
    string improvedAnswers = improvedAnswer1 ? "true" : "false";
    cout << "my answer: " << improvedAnswers << ". time: " << improved1_duration.count() << " microseconds" << endl;

    system("pause");
    return 0;
}