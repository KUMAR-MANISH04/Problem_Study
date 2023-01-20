class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxsum=0;
        for(int i=0;i<accounts.size();i++)
        {
            int sum=0;
            for(auto j:accounts[i])
            {
                sum=sum+j;
            }
            maxsum=max(sum,maxsum);
        }
        return maxsum;
    }
};