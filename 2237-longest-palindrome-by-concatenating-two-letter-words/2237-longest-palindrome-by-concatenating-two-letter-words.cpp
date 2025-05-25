class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        //creating a count variable to store the count of the string
        int count=0;
        //creating a mamp to stroe all the words and their occurances
        map<string,int> m;
        //shifting all the words to the map we created
        for(auto x:words)
        {
            m[x]++;
        }
        //storing a bool value to check occurece of words like aa gg etc so that appear only once
        bool flag = false;
        //running a loop for all the words prsent
        for(auto x:words)
        {
            //reversing every words we get 
            string w=x;
            reverse(w.begin(),w.end());
            //cout<<w<<endl;       to test in middle wheather output is fine or not
            //to check for palindrome in normal files
            //such as **ab ba** and ** cf fc**
            if(x!=w && m[x]>0 && m[w]>0)
            {
                count+=4;
                m[x]--;
                m[w]--;
            }
            //to check for palindrome in palindome words
            //such as **aa aa** and ** cc cc**
            else if(x==w && m[x]>=2)
            {
                count+=4;
                m[x]-=2;
            }
            //to check for palindrome in palindome words
            //such as **aa** and ** cc**
            else if(x==w && !flag && m[w]>0)
            {
                count+=2;
                m[x]--;
                flag=true;
            }
        }
        //retruning the int count
        return count;
    }
};