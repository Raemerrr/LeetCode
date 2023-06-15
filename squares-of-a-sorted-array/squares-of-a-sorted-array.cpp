class Solution {
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        for (int &d : nums)
        {
            d *= d;
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};