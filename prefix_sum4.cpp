// Subarrays sum equal K

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> map; 
        int sum=0, count=0; 
        map[0] = 1; 
        for(auto num: nums) { 
            sum+= num; 
            count += map[sum - k]; 
            map[sum]++; 
        }
        return count; 
    }
};