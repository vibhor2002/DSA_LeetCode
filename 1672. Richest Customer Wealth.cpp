// Algorithm

// Iterate over the customers i.e., accounts.
// For each account in accounts, we iterate over the money deposited in different banks and add it to currCustomerWealth.
// Compare currCustomerWealth with maxWealthSoFar. If currCustomerWealth is greater than maxWealthSoFar then update maxWealthSoFar.
// Return maxWealthSoFar.

// Time Complexity O(n^2)
// Space complexity O(1)

class Solution
{
public:
    int maximumWealth(vector<vector<int> > &accounts)
    {
        int maxsum = 0;
        for (vector<int> &account : accounts)
        {
            int currsum = 0;
            for (int money : account)
            {
                currsum += money;
            }
            maxsum = max(maxsum, currsum);
        }
        return maxsum;
    }
};