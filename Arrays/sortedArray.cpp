#include <bits/stdc++.h>
using namespace std;

bool sorted(vector<int> &nums)
{

    int count = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        /* code */
        if (nums[i + 1] >= nums[i])
        {
        }
        else
        {
            count++;
        }
    }
    // cout << count;
    if (count == 1 && nums[0] >= nums[nums.size() - 1])
    {
        /* code */
        return true;
    }
    else if (count == 0)
    {
        return true;
    }

    return false;
}

int main()
{

    vector<int> nums = {1,1,1};
    cout << sorted(nums) << endl;

    return 0;
}