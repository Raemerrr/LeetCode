class Solution {
public:
    void moveZeroes(vector<int> &nums) {
        deque<int> temp;
        for (int i = 0; i < nums.size(); i++) {
            while (!temp.empty() && nums[i] != 0) {
                nums[temp.front()] = nums[i];
                temp.pop_front();
                nums[i] = 0;
            }
            if (nums[i] == 0) {
                temp.push_back(i);
            }
        }
    }
};