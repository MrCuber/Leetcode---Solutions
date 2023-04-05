class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        long long ans = 0;
        for(int i=0; i<n; i++)
        {
            sum = sum + nums[i];
            long long res = (sum + i)/(i+1);
            ans = max(ans, res);
        }
        return ans;
    }
};
