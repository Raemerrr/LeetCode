class Solution {
public:
    vector<int> replaceElements(vector<int> &arr) {
        vector<int> answer(arr.size(), -1);
        int maxVal = arr.back();
        for (int i = arr.size() - 2; i >= 0; i--) {
            if (maxVal < arr[i]) {
                int temp = maxVal;
                maxVal = arr[i];
                answer[i] = temp;
            } else {
                answer[i] = maxVal;
            }
        }
        return answer;
    }
};