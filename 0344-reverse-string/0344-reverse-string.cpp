class Solution 
{
    public:
    void reverseString(vector<char>& s) {
        int start=0;
        int end=s.size()-1;
        while(start<end)
        {
            char temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            start++;
            end--;
        }
        cout<<"[";
        int i;
        for(i=0;i<s.size();i++)
        {
            cout<<"""<<s[i]<<"""<<",";
        }
        cout<<"""<<s[i+1]<<"""<<"]";
    }
};