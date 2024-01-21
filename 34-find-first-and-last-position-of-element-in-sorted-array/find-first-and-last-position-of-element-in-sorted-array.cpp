class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1;
        int last=-1;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            if(nums[i] == target && first == -1) first = i;
            if(nums[n-i-1] == target && last == -1) last = n-i-1;
        }
        return {first, last};
    }
};