class Solution {
public:
    vector<int> findThePrefixCommonArray(const vector<int>& A, const vector<int>& B) {
        std::bitset<51> a_nums;
        std::bitset<51> b_nums;
        std::vector<int> result(A.size(), 0);

        int common = 0;
        for (size_t i = 0; i != A.size(); ++i) {
            a_nums.set(A[i]);
            common += b_nums[A[i]];            
            b_nums.set(B[i]);
            common += a_nums[B[i]];            
            result[i] = common;
        }
        return result;
    }
};