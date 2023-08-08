class Solution {
public:
    int numMusicPlaylists(int n, int goal, int k) {
        int modulo = 1e9 + 7;
        vector<vector<long long>> dp(2, vector<long long>(n+1, 0))        ;
        dp[0][0] = 1;
        for(int i=1; i<=goal; i++)
        {
            dp[i%2][0] = 0;
            for(int j=1; j<=min(i, n); j++)
            {
                dp[i%2][j] = dp[(i-1)%2][j-1] * (n-(j-1)) % modulo;
                if(j > k)
                {
                    dp[i%2][j] = (dp[i%2][j] + dp[(i-1)%2][j] * (j-k)) % modulo;
                }
            }
        }
        return dp[goal%2][n];
    }
};