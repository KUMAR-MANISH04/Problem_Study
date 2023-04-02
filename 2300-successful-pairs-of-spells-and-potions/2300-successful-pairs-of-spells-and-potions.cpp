class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();

        sort(potions.begin(), potions.end());

        vector<int> result(n);
        for (int i = 0; i < n; i++) {
            long long spell = spells[i];
            int idx = this->bsearch(spell, potions, success);
            result[i] = (m - idx - 1);
        }

        return result;
    }
private:
    int bsearch(long long spell, vector<int>& potions, long long success) {
        int p = potions.size();

        int left = 0;
        int right = p - 1;
        int res = -1;
        while (left <= right) {
            int mid = (left + right)/2;
            if (spell*potions[mid] >= success) {
                right = mid - 1;
            } else {
                res = mid;
                left = mid + 1;
            }
        }
        
        return res;
    }
};