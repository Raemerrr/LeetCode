class Solution {
public:
    int removeElement(vector<int> &nums, int val) {
        int cnt = 0;
        for (int &d : nums) {
            if (d != val) {
                nums[cnt] = d;
                cnt++;
            }
        }
        return cnt;
    }
};