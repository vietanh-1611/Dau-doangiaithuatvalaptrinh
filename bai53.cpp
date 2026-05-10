class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Initialize current sum and global max sum 
        // with the first element of the array
        int currentMax = nums[0];
        int globalMax = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            // Decision: Extend the previous subarray or start fresh at i?
            currentMax = max(nums[i], currentMax + nums[i]);
            
            // Update the overall maximum found so far
            globalMax = max(globalMax, currentMax);
        }

        return globalMax;
    }
};