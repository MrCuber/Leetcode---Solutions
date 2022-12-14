class Solution {
public:
    int numSquares(int n) {
        int count = 0;
        auto squareroot = [](int n)
        {
            return (int)floor(sqrt(n));
        };
        if(pow(squareroot(n), 2) == n)
        {
            return 1;
        }
        for(int i=1; i<=sqrt(n); i++)
        {
            if(n-i*i == pow(squareroot(n-i*i),2))
            {
                return 2;
            }
        }
        while(n%4 == 0)
        {
            n = n/4;
        }
        if(n%8 != 7)
        {
            return 3;
        }
        return 4;
    }
};
