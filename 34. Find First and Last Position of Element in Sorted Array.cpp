class Solution
{
public:
    int getFirst(vector<int> &nums, int target)
    {
        int s = 0;
        int e = nums.size() - 1;
        int ans = -1;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target)
            {
                ans = mid;
                e = mid - 1;
            }
            else if (nums[mid] < target)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        return ans;
    }

    int getLast(vector<int> &nums, int target)
    {
        int s = 0;
        int e = nums.size() - 1;
        int ans = -1;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target)
            {
                ans = mid;
                s = mid + 1;
            }
            else if (nums[mid] < target)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> v(2, -1);
        // size 2
        // intilized to -1
        int first = getFirst(nums, target);
        if (first == -1)
        {
            return v;
        }
        int last = getLast(nums, target);

        v[0] = first;
        v[1] = last;

        return v;
    }
};