class Solution {
public:
    int mySqrt(int x) {
        long long y=0;
        while(y*y<=x) y++;
        return y-1;
        
    }
};


// class Solution {
// public:
//     int mySqrt(int x) {
//         long long s=0;
//         long long e=x;
//         long long ans=0;
//         while(s<=e){
//             long long m=(s+e)/2;
//             if(m*m<=x){
//                 ans=m;
//                 s=m+1;
//             }
//             else{
//                 e=m-1;
//             }
//         }
//         return ans;
//     }
// };



// class Solution {
// public:
//     int mySqrt(int x) {
//         return sqrt(x);
//     }
// };