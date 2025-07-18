// Running Sum of 1d array

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();

        vector < int > prefixSum (nums);

        prefixSum[0] = nums[0];

        for(int i = 1; i< n ; i++){
            prefixSum[i] = prefixSum[i-1] + nums[i];
        }
        return prefixSum;
    }
};