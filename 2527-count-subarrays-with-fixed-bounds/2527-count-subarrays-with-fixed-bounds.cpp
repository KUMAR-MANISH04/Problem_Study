// Optimal solution V2
class Solution {
public:
    static long countSubarrays(const vector<int>& a, const int mn, const int mx) {
        const int n = a.size();
        long count = 0;
        if (mn < mx)
            for (int i = 0, mni = -1, mxi = -1, s = -1; i < n; ++i) {
                const int ai = a[i];
                if (ai == mn) mni = i; // min index
                else if (ai == mx) mxi = i; // min index
                else if (ai < mn || ai > mx) s = i; // split index
                if (mni > s && mxi > s) count += min(mni, mxi) - s;
            }
        else if (mn == mx)
            for (int i = 0, mni = -1, s = -1; i < n; ++i) {
                const int ai = a[i];
                if (ai == mn) mni = i; // min/max index
                else s = i; // split index
                if (mni > s) count += mni - s;
            }
        return count;
    }
};