/*自己写的不完善版本
#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums)
{
    int allf = 0, maxf = 0, sum1 = 0, sum2 = 0, i = 0, j = nums.size() - 1, temp1 = 0, temp2 = 0, sum = 0;
    for (; i < nums.size(); i++)
    {
        if (nums[i] < 0)
        {
            allf++;
            if (allf == 1)
            {
                maxf == nums[i];
            }
            else if (nums[i] > maxf)
            {
                maxf = nums[i];
            }
        }
        if (sum1 < 0)
        {
            sum1 = 0;
            temp1 = i + 1;
        }
        else if (sum1 >= 0)
        {
            sum1 += nums[i];
        }
    }
    if (allf == nums.size())
        return maxf;

    for (; j >= 0; j--)
    {
        if (sum2 < 0)
        {
            sum2 = 0;
            temp2 = j - 1;
        }
        else if (sum2 >= 0)
        {
            sum2 += nums[j];
        }
    }

    for (int m = temp1; m <= temp2; m++)
    {
        sum += nums[m];
    }
    return sum;
}

int main()
{
    vector<int>nums;
    nums.push_back(-2);
    nums.push_back(1);
    nums.push_back(-3);
    nums.push_back(4);
    nums.push_back(-1);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(-5);
    nums.push_back(4);

    cout<<maxSubArray(nums);

    return 0;
}


//大神版本
int res = nums[0];
        int sum = 0;
        for (int num : nums) {
            if (sum > 0)
                sum += num;
            else
                sum = num;
            res = Math.max(res, sum);
        }
        return res;
*/