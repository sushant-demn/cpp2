// https://leetcode.com/problems/two-sum/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> result;

        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if ((nums[i] + nums[j] == target) and (i != j))
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main()
{

    return 0;
}
