class Solution {
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> answer;
        for (int d : nums)
        {
            answer.push_back(d * d);
        }
        sort(answer.begin(), answer.end());
        return answer;
    }
};