// 1st Method using extra space.

class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            ans.push_back(nums[i]);
        }
        for (int i = 0; i < n; i++)
        {
            ans.push_back(nums[i]);
        }
        return ans;
    }

    // 2nd method without extra Space.

    class Solution
    {
    public:
        vector<int> getConcatenation(vector<int> &nums)
        {
            int n = nums.size();
            for (int i = 0; i < n; i++)
            {
                nums.push_back(nums[i]);
            }
            return nums;
        }
    };