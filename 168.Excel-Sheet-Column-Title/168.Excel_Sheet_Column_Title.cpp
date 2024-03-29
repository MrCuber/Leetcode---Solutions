class Solution {
public:
    string convertToTitle(int columnNumber) {
        if(columnNumber <= 26)
        {
            return string(1, 'A' + (columnNumber-1)%26);
        }
        string ans = "";
        while(columnNumber)
        {
            if(columnNumber % 26 == 0)
            {
                ans += 'A' + 25;
                columnNumber = columnNumber - 1;
            }
            else
            {
                ans += 'A' + columnNumber%26 - 1;
            }
            columnNumber = columnNumber/26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
