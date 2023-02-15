class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i=num.size()-1;
        vector<int> ans;
        int carry=0;
        while(i>=0||k>0||carry>0)
        {
            int sum=carry;
            if(i>=0) sum=sum+num[i];
            if(k>0) sum=sum+k%10;
            int temp=sum%10;
            ans.push_back(temp);
            carry=sum/10;
            k=k/10;
            i=i-1;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

/*
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector <int> ans;
        int carry=0;
        int n=num.size()-1;
        while(k>0 || n>=0 )
        {
            int sum=carry;
            if(n>=0)
            {
                sum=+num[n];
                n--;
            }
            int temp=k%10;
            if(k>0)
            {
                k=k/10;
            }
            temp=sum+temp;
            int temp2 =temp%10;
            ans.push_back(temp2);
            carry=temp/10;
        }
        int temp=1;
        if(carry==1)
            ans.push_back(temp);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
*/