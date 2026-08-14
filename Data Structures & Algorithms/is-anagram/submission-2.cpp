class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> _s;
        for(char c : s) {
            _s[c]++;
        }
        unordered_map<char, int> _t;
        for(char c : t) {
            _t[c]++;
        }

        return _s == _t;
    }
};
