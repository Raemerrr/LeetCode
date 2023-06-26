class Solution {
public:
    int heightChecker(vector<int> &heights) {
        int answer = 0;
        vector<int> sortedHeights(heights);
        sort(sortedHeights.begin(), sortedHeights.end());
        for (size_t i = 0; i < heights.size(); i++) {
            if (heights[i] != sortedHeights[i]) {
                answer++;
            }
        }
        return answer;
    }
};