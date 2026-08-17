class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        
        unordered_set<int> set;

        int longest = 0;
        int currLength = 1;

        for(int num : nums) {
            set.insert(num);
        }

        for(int num : nums) {
            if(set.find(num - 1) == set.end()) {
                int n = 1;
                currLength = 1;
                while(set.find(num + n) != set.end()) {
                    currLength++;
                    n++;
                }
                if(currLength > longest) {
                    longest = currLength;
                }
            }
        }

        return longest;
    }
};
