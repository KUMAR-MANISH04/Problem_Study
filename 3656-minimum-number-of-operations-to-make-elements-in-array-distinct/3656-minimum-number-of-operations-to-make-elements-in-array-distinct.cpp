class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;

        for(int i=n-1; i>=0; i--){
            if(s.count(nums[i])) {
                return (i/3)+1;   // '/' by 3 gives number of operations
                                 // '%' gives remaining part after division
            }

            s.emplace(nums[i]);
        }
        
        return 0;
    }
};