class Solution {
public:
    int numDecodings(string s) {
        int n=s.length();
        if(s[0]=='0')
            return 0;
        vector<int> dp(n+1);
        dp[n]=1;    //since there is a always a digit present  
        for (int i =n-1;i>=0;i--) 
        {
            if (s[i] != '0')  //for handlig zero in between
                dp[i] += dp[i+1];
            if (i+1 < s.size())
            {
                    if(s[i+1]<='6' && s[i]=='2') //handling 20 to 26
                    {
                        dp[i] += dp[i+2];
                    }
                    else if (s[i+1]<='9' && s[i]=='1') //handling 10 to 19
                    {
                        dp[i] += dp[i+2];
                    }
            }
        }
        return dp[0]; //returning final statement
    }
};