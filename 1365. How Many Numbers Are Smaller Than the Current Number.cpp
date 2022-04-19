// Brute force

class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int count = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (j != i && nums[i] > nums[j])
                {
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};

// Time Efficient Solution

class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        // create bucket for counting sort
        vector<int> a(102);
        vector<int> b(102);

        // get frequency for each element
        for (int i = 0; i < nums.size(); i++)
        {
            a[nums[i]]++;
        }

        // filling the prefix sum srray
        for (int i = 1; i < 102; i++)
        {
            b[i] = b[i - 1] + a[i - 1];
        }

        // populate the result
        vector<int> result(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            result[i] = b[nums[i]];
        }
        return result;
    }
};
