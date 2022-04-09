// Approach 2: Using Input Array for Output
// Time Complexity O(n)
// Space Complexity O(1)

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n= nums.size();
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        return nums;
    }
};