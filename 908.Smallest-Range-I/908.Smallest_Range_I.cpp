class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int Min = nums[0];
        int Max = nums[0];
        for(int i: nums)
        {
            Min = min(Min, i);
            Max = max(Max, i);
        }
        return max(0, Max-Min-2*k);
    }
};
