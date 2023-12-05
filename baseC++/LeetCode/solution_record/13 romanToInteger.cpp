//
// Created by Shaobo LIU on 2023/8/26.
//

#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<chrono>

using namespace std;

/*
    my answer.
    If the value of this index is less than next the value of index+1, then combining both is the fixed value
 */
class MySolution {
public:
    map<char, int> romanNumber = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
    };

    int romanToInt(string s) {
        int index = 0;
        int answer = 0;
        while (1) {
            if (index == s.size() - 1) {
                answer += romanNumber[s[index]];
                break;
            } else if (index > s.size() - 1) {  // out the index, break
                break;
            } else {
                if (romanNumber[s[index]] < romanNumber[s[index + 1]]) {
                    if (s[index] == 'I') {
                        if (s[index + 1] == 'V')
                            answer += 4;
                        if (s[index + 1] == 'X')
                            answer += 9;
                    }
                    if (s[index] == 'X') {
                        if (s[index + 1] == 'L')
                            answer += 40;
                        if (s[index + 1] == 'C')
                            answer += 90;
                    }
                    if (s[index] == 'C') {
                        if (s[index + 1] == 'D')
                            answer += 400;
                        if (s[index + 1] == 'M')
                            answer += 900;
                    }
                    index += 2;
                } else {
                    answer += romanNumber[s[index]];
                    index++;
                }
            }
        }
        return answer;
    }
};

/*
    improved position:
    1. using the unordered_map, its speech is faster than map
    2. the nature is: if the value of this index is less than the value of the index+1,
       just change the "+" before value of index into "-"
*/
class ImprovedSolution1 {
private:
    unordered_map<char, int> symbolValues = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
    };

public:
    int romanToInt(string s) {
        int ans = 0;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            int value = symbolValues[s[i]];
            if (i < n - 1 && value < symbolValues[s[i + 1]]) {
                ans -= value;
            } else {
                ans += value;
            }
        }
        return ans;
    }
};

/*
    Lambda function: roman -> math number
    lambda function grammar:
    auto lambda_name = [] (parameters_type parameters_name) -> return_type{}
*/
auto getValue = [](char &value) -> int {
    // char value: pass by value; char & value: pass by reference. Using the latter to avoid opening new space and save memory
    switch (value) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
};

/*
    improved position:
    1. using the lambda and switch to replace the map or unordered_map, the speed is improved 5x !!!
*/
class ImprovedSolution2 {
public:
    int romanToInt(string s) {
        int ans = 0;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            int value = getValue(s[i]);
            if (i < n - 1 && value < getValue(s[i + 1])) {
                ans -= value;
            } else {
                ans += value;
            }
        }
        return ans;
    }
};

int main() {
    string s = "MCMXCIV";

    auto my_start = chrono::high_resolution_clock::now();
    MySolution ms;
    int myAnswer = ms.romanToInt(s);
    auto my_end = chrono::high_resolution_clock::now();
    auto my_duration = chrono::duration_cast<chrono::microseconds>(my_end - my_start);
    cout << "my answer: " << myAnswer << ". time: " << my_duration.count() << " microseconds" << endl;

    auto improved1_start = chrono::high_resolution_clock::now();
    ImprovedSolution1 is1;
    int improvedAnswer1 = is1.romanToInt(s);
    auto improved1_end = chrono::high_resolution_clock::now();
    auto improved1_duration = chrono::duration_cast<chrono::microseconds>(improved1_end - improved1_start);
    cout << "improved answer1: " << improvedAnswer1 << ". time: " << improved1_duration.count() << " microseconds" << endl;

    auto improved2_start = chrono::high_resolution_clock::now();
    ImprovedSolution2 is2;
    int improvedAnswer2 = is2.romanToInt(s);
    auto improved2_end = chrono::high_resolution_clock::now();
    auto improved2_duration = chrono::duration_cast<chrono::microseconds>(improved2_end - improved2_start);
    cout << "improved answer2: " << improvedAnswer2 << ". time: " << improved2_duration.count() << " microseconds" << endl;

    system("pause");
    return 0;
}
