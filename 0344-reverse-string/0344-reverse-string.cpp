class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;int j=s.size()-1;
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
};














// class Solution 
// {
//     public:
//     void reverseString(vector<char>& s) {
//         int start=0;
//         int end=s.size()-1;
//         while(start<end)
//         {
//             char temp=s[start];
//             s[start]=s[end];
//             s[end]=temp;
//             start++;
//             end--;
//         }
//     }
// };