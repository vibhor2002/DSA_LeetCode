class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {

        int ans = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            ans = ans ^ nums[i];
        }

        return ans;
    }
};

// So since we will XOR all the elements in our array the duplicates will become 0 and only left element would be the unique one.
// For Example : array = {2,1,4,5,2,4,1}

// After XOR Operation :
// ((2^2)^(1^1)^(4^4)^(5)) => (0^0^0^5) => 5