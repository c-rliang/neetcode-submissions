class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {


        // make map
        map<array<int, 26>, vector<string>> map;

        // for each string, make an alphabet array. for each char in the string,
        // add +1 to the index if the corresponding letter is in the word.
        // then, using the alphabet array as an index, push the string into the
        // vector contained in that key.
        for(string s : strs) {
            array<int, 26> alphabet = {};
            for(char c : s) {
                alphabet[c - 'a']++;
            }
            map[alphabet].push_back(s);
        }

        // create result 2d vector.
        vector<vector<string>> result;

        // for each item in the map, push back the second item (vector).
        for(auto item : map) {
            result.push_back(item.second);
        }

        return result;
        
    }
};
