// Brute Force
// Time Complexity: O(n^2)

class Solution
{
public:
    vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
    {
        int n = index.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (index[j] >= index[i])
                {
                    index[j]++;
                }
            }
        }

        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[index[i]] = nums[i];
        }

        return ans;
    }
};

// Optimized
// Time complexity: O(n)

class Solution
{
public:
    vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
    {
        vector<int> result;
        for (int i = 0; i < index.size(); ++i)
            result.insert(result.begin() + index[i], nums[i]);
        return result;
    }
};