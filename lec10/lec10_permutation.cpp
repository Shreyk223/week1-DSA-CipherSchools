#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(vector<int> &nums, int ind, vector<vector<int>> &ans, int max)
    {
        if (ind >= max)
        {
            ans.push_back(nums);
            return;
        }
        for (int i = ind; i < max; i++)
        {
            swap(nums[ind], nums[i]);
            solve(nums, ind + 1, ans, max);
            swap(nums[i], nums[ind]);
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {

        vector<vector<int>> ans;
        int max = nums.size();
        solve(nums, 0, ans, max);
        return ans;
    }
};

int main()
{
    return 0;
}