class Solution {
public:
     int shipWithinDays(vector<int>& weights, int days) {
        int maxi=INT_MIN;
        for(int i=0;i< weights.size();i++)
        {
             maxi=max(maxi,weights[i]);
                         
        }
        int day=0;
        int count=0;
        int i=0;
        while(i<weights.size())
        {
            count+=weights[i];
            if(count>maxi)
            {
                day++;
                count=0;
                i--;
                
            }
            if(day==days&&i<weights.size()-1)
            {
                maxi++;
                i=-1;
                count=0;
                day=0;
            }
            i++;
        }
        return maxi;
    }
};