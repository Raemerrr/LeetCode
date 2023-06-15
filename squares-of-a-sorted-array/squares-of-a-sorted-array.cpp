class Solution {
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> answer;
        for (int d : nums)
        {
            answer.push_back(pow(d, 2));
        }
        sort(answer.begin(), answer.end());
        return answer;
    }
};