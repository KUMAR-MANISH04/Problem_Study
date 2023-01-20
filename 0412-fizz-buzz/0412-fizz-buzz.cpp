class Solution {
public:
    vector<string> fizzBuzz(int n) {
        string s;
        vector<string> ans;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 && i%5==0)
            {
                s="FizzBuzz";
                ans.push_back(s);
            }
            else if(i%3==0)
            {
                s="Fizz";
                ans.push_back(s);
            }
            else if(i%5==0)
            {
                s="Buzz";
                ans.push_back(s);
            }
            else
            {
                s=to_string(i);
                ans.push_back(s);   
            }
        }
        return ans;
    }
};