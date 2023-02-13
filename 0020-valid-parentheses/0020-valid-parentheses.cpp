class Solution {
public:
    bool isValid(string str) {
        stack <char> s;
        if(str.length()<=1) 
            return false;
        for(int i=0;i<str.length();i++)
        {
            char ch=str[i];
            if(!s.empty() && (ch==')'||ch==']'||ch=='}'))
            {
                if(s.top()=='('&&ch==')')
                    s.pop();
                else if(s.top()=='['&&ch==']')
                    s.pop();
                else if(s.top()=='{'&&ch=='}')
                    s.pop();
                else
                    s.push(ch);
            }
            else
                s.push(ch);
        }
        if(s.empty())
            return true;
        else
            return false;
    }
};