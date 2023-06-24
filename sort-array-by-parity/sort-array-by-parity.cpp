class Solution {
public:
    vector<int> sortArrayByParity(vector<int> &nums) {
        vector<int> even, odd;
        for (const int d : nums) {
            (d % 2 == 0 ? even : odd).push_back(d);
        }
        even.insert(even.end(), odd.begin(), odd.end());
        return even;
    }
};