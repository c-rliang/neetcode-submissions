class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int len = nums.size();
        vector<int> leftPrefixSums = nums;
        vector<int> rightPrefixSums = nums;

        vector<int> result;

        for(int j = 1; j < len; j++) {
            leftPrefixSums[j] *= leftPrefixSums[j - 1];
        }

        for(int k = len - 2; k >= 0; k--) {
            rightPrefixSums[k] *= rightPrefixSums[k + 1];
        }

        for(int i = 0; i < len; i++) {
            int rhs = 1;
            int lhs = 1;
            if(i + 1 < len) {
                rhs = rightPrefixSums[i + 1];
            }
            if(i - 1 >= 0) {
                lhs = leftPrefixSums[i - 1];
            }

            result.push_back(rhs * lhs);
        }

        return result;

    }
};
