//
// Created by Shaobo LIU on 2023/8/27.
// Test points: string, binary search, divide and conquer strategy

#include<iostream>
#include<vector>
#include<chrono>
#include<algorithm>

using namespace std;

/*
    my answer.
    first, find the common prefix('answer') of the first str and the second str
    second, find the common prefix of the 'answer' and latter str
*/
class MySolution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        string answer = "";
        if (strs.size() == 0) {
            answer = "";
            return answer;
        } else if (strs.size() == 1) {
            answer = strs[0];
            return answer;
        } else {
            int length = (strs[0].size() <= strs[1].size()) ? strs[0].size() : strs[1].size();
            for (int i = 0; i < length; i++) {
                if (strs[0][i] == strs[1][i]) {
                    answer += strs[0][i];
                } else {
                    break;
                }
            }

            if (answer == "")
                return "";
            if (strs.size() == 2)
                return answer;
            else {
                string new_answer = answer;
                for (int j = 2; j < strs.size(); j++) {
                    int length = (new_answer.size() <= strs[j].size()) ? new_answer.size() : strs[j].size();
                    string temp = "";
                    for (int i = 0; i < length; i++) {
                        if (new_answer[i] == strs[j][i]) {
                            temp.append(1, new_answer[i]);
                        } else {
                            break;
                        }
                    }
                    if (temp == "")
                        return "";
                    new_answer = temp;
                }
                return new_answer;
            }
        }
    }
};

/*
    thinking:
    find common prefixes by columns for each word's letter
 */
class ImprovedSolution1 {
public:
    string longestCommonPrefix(vector<string> &strs) {
        if (!strs.size())
            return "";
        int length = strs[0].size();
        int count = strs.size();
        for (int i = 0; i < length; i++) {
            char c = strs[0][i];
            for (int j = 1; j < count; j++) {  // compare with latter str
                // when size of the latter str equal with common prefix, return
                // when the str[j][!] != strs[0][i], return
                if (i == strs[j].size() || strs[j][i] != c) {
                    return strs[0].substr(0, i);  // substr
                }
            }
        }
    }
};

/*
    thinking:
    The first half of the string looks for a common prefix,
    the second half looks for a common prefix,
    and then divides it
 */
class ImprovedSolution2 {
public:
    string longestCommonPrefix(vector<string> &strs) {
        if (!strs.size())
            return "";
        else
            return longestCommonPrefix(strs, 0, strs.size() - 1);
    }

    string longestCommonPrefix(const vector<string> &strs, int start, int end) {
        if (start == end)
            return strs[start];
        else {
            int mid = (start + end) / 2;
            string lcpLeft = longestCommonPrefix(strs, start, mid);
            string lcpRight = longestCommonPrefix(strs, mid + 1, end);
            return commonPrefix(lcpLeft, lcpRight);
        }
    }

    string commonPrefix(const string &lcpLeft, const string &lcpRight) {
        int minLength = min(lcpLeft.size(), lcpRight.size());
        for (int i = 0; i < minLength; i++) {
            if (lcpLeft[i] != lcpRight[i])
                return lcpLeft.substr(0, i);
        }
        return lcpLeft.substr(0, minLength);
    }
};

/*
    thinking:
    First find the shortest str,
    then perform a binary search to find its longest common prefix
 */
class ImprovedSolution3 {
public:
    string longestCommonPrefix(vector<string> &strs) {
        if (!strs.size()) {
            return "";
        }
        int minLength = min_element(strs.begin(), strs.end(),
                                    [](const string &s, const string &t) { return s.size() < t.size(); })->size();
        int low = 0, high = minLength;
        while (low < high) {
            int mid = (high - low + 1) / 2 + low;
            if (isCommonPrefix(strs, mid)) {
                low = mid;
            } else {
                high = mid - 1;
            }
        }
        return strs[0].substr(0, low);
    }

    bool isCommonPrefix(const vector<string> &strs, int length) {
        string str0 = strs[0].substr(0, length);
        int count = strs.size();
        for (int i = 1; i < count; ++i) {
            string str = strs[i];
            for (int j = 0; j < length; ++j) {
                if (str0[j] != str[j]) {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    vector<string> strs = {"ixdog", "ixracecar", "ixxcar"};

    auto my_start = chrono::high_resolution_clock::now();
    MySolution ms;
    string my_answer = ms.longestCommonPrefix(strs);
    auto my_end = chrono::high_resolution_clock::now();
    auto my_duration = chrono::duration_cast<chrono::microseconds>(my_end - my_start);
    cout << "my answer: [" << my_answer << "]. time: " << my_duration.count() << " microseconds" << endl;

    auto improved1_start = chrono::high_resolution_clock::now();
    ImprovedSolution1 is1;
    string improved1_answer = is1.longestCommonPrefix(strs);
    auto improved1_end = chrono::high_resolution_clock::now();
    auto improved1_duration = chrono::duration_cast<chrono::microseconds>(improved1_end - improved1_start);
    cout << "improved1 answer: [" << improved1_answer << "]. time: " << improved1_duration.count() << " microseconds" << endl;

    auto improved2_start = chrono::high_resolution_clock::now();
    ImprovedSolution2 is2;
    string improved2_answer = is2.longestCommonPrefix(strs);
    auto improved2_end = chrono::high_resolution_clock::now();
    auto improved2_duration = chrono::duration_cast<chrono::microseconds>(improved2_end - improved2_start);
    cout << "improved2 answer: [" << improved2_answer << "]. time: " << improved2_duration.count() << " microseconds" << endl;

    auto improved3_start = chrono::high_resolution_clock::now();
    ImprovedSolution3 is3;
    string improved3_answer = is3.longestCommonPrefix(strs);
    auto improved3_end = chrono::high_resolution_clock::now();
    auto improved3_duration = chrono::duration_cast<chrono::microseconds>(improved3_end - improved3_start);
    cout << "improved3 answer: [" << improved3_answer << "]. time: " << improved3_duration.count() << " microseconds" << endl;

    system("pause");
    return 0;
}