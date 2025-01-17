#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> v;
        sort(nums.begin(), nums.end());
        vector<int> temp;
        int sum;
        for (int i = 0; i < nums.size() - 2; i++)
        {

            if (i == 0 || i > 0 && nums[i] != nums[i - 1])
            {

                int low = i + 1;
                int high = nums.size() - 1;
                sum = 0 - nums[i];

                while (low < high)
                {
                    if (nums[low] + nums[high] == sum)
                    {
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        temp.push_back(nums[i]);
                        v.push_back(temp);

                        while (low < high && nums[low] == nums[low + 1])
                            low++;
                        while (low < high && nums[high] == nums[high - 1])
                            high--;
                        low++;
                        high--;
                    }
                    else if (nums[low] + nums[high] < sum)
                        low++;
                    else
                    {
                        high--;
                    }
                }
            }
        }
        return v;
    }
};

int main()
{
    return 0;
}