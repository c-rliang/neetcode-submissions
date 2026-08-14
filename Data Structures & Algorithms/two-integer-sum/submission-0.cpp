class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> map;

        for(int i = 0; i < nums.size(); i++) {
            int otherNum = target - nums[i];
            if(map.contains(otherNum)) {
                return {map[otherNum], i};
            }
            map.insert({nums[i], i});
        }
        return {};
    }
};
