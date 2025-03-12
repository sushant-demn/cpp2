#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    cout << "function called" << nums.size() << "\n";

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < ((nums.size() - 1) - i); j++)
        {
            if (nums[j] == 0 && nums[j + 1] != 0)
            {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    cout << nums.size() << "aaizavadya\n";
    moveZeroes(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}