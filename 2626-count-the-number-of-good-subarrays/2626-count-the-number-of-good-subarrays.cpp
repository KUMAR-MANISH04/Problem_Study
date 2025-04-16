class Solution {
public:
    long long countGood(vector<int>& nums, int k, long long cnt = 0) {
        unordered_map <int,int> mpp;
        for (int i = 0, j = 0 ; i < nums.size() ; i++) {
            k -= mpp[nums[i]]++;
            while (k <= 0) k += --mpp[nums[j++]];
            cnt += j;
        }
        return cnt;
    }
};