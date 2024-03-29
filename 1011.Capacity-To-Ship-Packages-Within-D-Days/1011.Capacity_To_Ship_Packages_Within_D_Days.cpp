class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end());
        int h = accumulate(weights.begin(), weights.end(), 0);
        while(l < h)
        {
            int mid = l+(h-l)/2;
            int cur = 0;
            int days_need = 1;
            for(int w : weights)
            {
                if(cur + w > mid)
                {
                    cur = 0;
                    days_need++;
                }
                cur += w;
            }
            if(days_need <= days)
            {
                h = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        return l;
    }
};
