class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        vector<int> org;
        vector<int>::iterator i;
        for (i = nums.begin(); i != nums.end(); i++)
        {
            int ele = *i;
            if (find(org.begin(), org.end(), ele) != org.end())
            {
                nums.erase(i);
                i--;
            }
            else
            {
                org.push_back(*i);
            }
        }
        return nums.size();
    }
};