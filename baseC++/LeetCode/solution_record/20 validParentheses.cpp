//
// Created by Shaobo LIU on 2023/8/28.
// Test points: stack(栈), hashTable, string

#include<iostream>
#include<vector>
#include<stack>
#include<chrono>

using namespace std;

/*
    my answer.
    Remove paired parentheses
*/

class MySolution {
public:
    bool isValid(string s) {
        int length = s.size();
        if (length % 2 == 1)
            return false;
        else {
            for (int i = 0; i <= s.size() - 1; i++) {
                if ((s[i] == '(' && s[i + 1] == ')') || (s[i] == '[' && s[i + 1] == ']') ||
                    (s[i] == '{' && s[i + 1] == '}'))
                {
                    s = s.replace(i, 2, "");
                    i = -1;  // i++, so i = 0, it will be loop from i=0 in the new s
                }
                if (s == "")  // s.size() == 0
                    return true;
            }
                return false;
        }
    }
};

/*
    thinking:
    if it is left parentheses, it will be push stack
    if it is right parentheses, judge whether match with the left parentheses of top of stack
    match successfully, pop the stack
*/
class Improved1Solution1 {
public:
    // determine if parentheses match
    bool isMatch(char left, char right) {
        switch(right){
            case ')':
                return left == '(';
            case ']':
                return left == '[';
            case '}':
                return left == '{';
            default:
                return false;
        }
    }

    bool isValid(string s) {
        int n = s.size();
        if (n % 2 == 1) {
            return false;
        }
        stack<char> parentheses;
        for (char ch: s) {
            if (ch == ')' || ch == ']' || ch == '}') {
                if (parentheses.empty() || !isMatch(parentheses.top(), ch))
                    return false;
                parentheses.pop();
            }
            else
                parentheses.push(ch);
        }
        return parentheses.empty();
    }
};

int main() {
    string s = "()[]{}";

    auto my_start = chrono::high_resolution_clock::now();
    MySolution ms;
    bool myAnswer = ms.isValid(s);
    auto my_end = chrono::high_resolution_clock::now();
    auto my_duration = chrono::duration_cast<chrono::microseconds>(my_end - my_start);
    string myAnswers = myAnswer ? "true" : "false";
    cout << "my answer: " << myAnswers << ". time: " << my_duration.count() << " microseconds" << endl;

    auto improved1_start = chrono::high_resolution_clock::now();
    Improved1Solution1 is1;
    bool improvedAnswer = is1.isValid(s);
    auto improved1_end = chrono::high_resolution_clock::now();
    auto improved1_duration = chrono::duration_cast<chrono::microseconds>(improved1_end - improved1_start);
    string improved1Answers = improvedAnswer ? "true" : "false";
    cout << "improved1 answer: " << improved1Answers << ". time: " << improved1_duration.count() << " microseconds" << endl;

    system("pause");
    return 0;
}