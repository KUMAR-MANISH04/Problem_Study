class Solution {
public:
    int strStr(string s1, string s2) 
    { 
        size_t found = s1.find(s2);
        if (found != string::npos)
              return found;    
       return -1;
    }
};