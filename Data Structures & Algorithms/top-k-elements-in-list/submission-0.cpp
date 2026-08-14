class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // count the numbers using unordered_map
        // priority queue of pairs

        unordered_map<int, int> counting;

        for(int num : nums) {
            counting[num]++;
        }

        // first number in pair is frequency, second is the number
        // +1 to first number each time

        priority_queue<pair<int, int>> pq;

        for(auto item : counting) {
            pair<int, int> newPair = {item.second, item.first};
            pq.push(newPair);
        }

        vector<int> result;

        for(int i = 0; i < k; i++) {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};
