#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> & nums, int target) {
        vector<int> answer;
        int i,j;
        for(i=0;i<size(nums)-1;i++) {
            // int cha = target - nums[i];
            for(j=i+1;j<size(nums);j++)
                if(nums[j]==(target - nums[i])) {
                    answer.push_back(i);
                    answer.push_back(j);
                    break;
                }
            if(size(answer)==2)
                break;
        }
        return answer;    
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    Solution s;
    int n[] = {5,2,1,3,4,7};
    vector<int> a(n,n+6);
    //for(int i=0;i<a.size();i++)
    //    cout << a.at(i) << " ";
    vector<int> answers = s.twoSum(a,12);
    for(int i=0;i<answers.size();i++)
        cout << answers.at(i) << "  ##  ";
    return 0;
}
