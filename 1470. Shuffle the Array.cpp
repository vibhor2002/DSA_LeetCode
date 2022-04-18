class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> arr;
        for (int x = 0; x < n; x++)
        {
            arr.push_back(nums[x]);
            arr.push_back(nums[n + x]);
        }
        return arr;
    }
};