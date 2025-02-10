class Solution {
public:
    string clearDigits(string s) {
        vector<char> result;
        for (char ch : s) {
            if (ch >= '0' && ch <= '9') {
                if (!result.empty() && result.back() >= 'a' &&
                    result.back() <= 'z') {
                    result.pop_back();
                }
            } else {
                result.push_back(ch);
            }
        }
        return string(result.begin(), result.end());
    }
};