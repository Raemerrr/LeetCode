class Solution {
public:
    int removeElement(vector<int> &nums, int val) {
        const int MAX = 101;
        int answer = nums.size();
        for (int &d : nums) {
            if (d == val) {
                d = MAX;
                answer--;
            }
        }
        sort(nums.begin(), nums.end());
        return answer;
    }
};