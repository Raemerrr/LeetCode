class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int> &nums) {
        vector<int> answer;
        set<int> s(nums.begin(), nums.end());
        for (int i = 1; i <= nums.size(); i++) {
            if (!s.count(i)) {
                answer.push_back(i);
            }
        }
        return answer;
    }
};