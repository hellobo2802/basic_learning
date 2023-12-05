//
// Created by Shaobo LIU on 2023/8/24.
// Test points: array, hash table

#include<iostream>
#include<vector>
#include<unordered_map>
#include<chrono>

using namespace std;

/*
    my answer
    violent enumeration
*/
class MySolution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> answer;
        int i, j;
        for (i = 0; i < size(nums) - 1; i++) {
            for (j = i + 1; j < size(nums); j++)
                if (nums[j] == (target - nums[i])) {
                    answer.push_back(i);
                    answer.push_back(j);
                    break;
                }
            if (size(answer) == 2)
                break;
        }
        return answer;
    }
};

/*
    when time complexity is O(n^2), space complexity is O(n): use space complexity to reduce time complexity
    improved position:
    1. during for/while, record some information to avoid another loop
    2. Lookup Table Method: record the iterated information and association
*/
class ImprovedSolution1 {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> hashTable;
        for (int i = 0; i < nums.size(); i++) {
            auto it = hashTable.find(target - nums[i]);
            if (it != hashTable.end()) {
                return {it->second, i};
            }
            hashTable[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    vector<int> a = {3,2,4};

    auto my_start = chrono::high_resolution_clock::now();
    MySolution ms;
    vector<int> my_answer = ms.twoSum(a, 6);
    auto my_end = chrono::high_resolution_clock::now();
    auto my_duration = chrono::duration_cast<chrono::microseconds>(my_end - my_start);
    for (int i = 0; i < my_answer.size(); i++)
        cout << "answers[" << i << "] is " << my_answer.at(i) << endl;
    cout << "my time: " << my_duration.count() << " microseconds"  << endl;

    auto improved1_start = chrono::high_resolution_clock::now();
    ImprovedSolution1 is1;
    vector<int> improved1_answer = is1.twoSum(a, 12);
    auto improved1_end = chrono::high_resolution_clock::now();
    auto improved1_duration = chrono::duration_cast<chrono::microseconds>(improved1_end - improved1_start);
    for (int i = 0; i < improved1_answer.size(); i++)
        cout << "answers[" << i << "] is " << improved1_answer.at(i) << endl;
    cout << "improved1 time: " << improved1_duration.count() << " microseconds" << endl;

    system("pause");
    return 0;
}
