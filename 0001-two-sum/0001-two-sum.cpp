class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        vector<pair<int,int>> v;
        pair<int,int> p;
        int n=nums.size();
        for(int i=0;i<n;i++){
            p.first=nums[i];
            p.second=i;
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        auto l=v.begin(),r=v.end();
        r--;
        while(l<r){
            int sum=l->first+r->first;
            if(sum==target){
                ans.push_back(l->second);
                ans.push_back(r->second);
                break;
            }
            else if(sum>target){
                r--;
            }
            else{
                l++;
            }
        }
        return ans;
    }
};