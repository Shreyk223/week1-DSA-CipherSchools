#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void f(int n, vector<vector<int>> &ans, vector<int> &sans, int i, vector<int> &nums)
    {

        if (i == n)
        {
            ans.push_back(sans);
            return;
        }

        sans.push_back(nums[i]);
        f(n, ans, sans, i + 1, nums);
        sans.pop_back();
        f(n, ans, sans, i + 1, nums);
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> sans;

        f(nums.size(), ans, sans, 0, nums);
        return ans;
    }
};

int main()
{
    return 0;
}