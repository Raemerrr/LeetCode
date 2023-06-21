class Solution {
public:
    bool validMountainArray(vector<int> &arr) {
        int increasingLastIdx = 100001;
        int decreasingFirstIdx = -1;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i - 1] == arr[i]) {
                return false;
            }
            if (decreasingFirstIdx == -1 && arr[i - 1] > arr[i]) {
                decreasingFirstIdx = i;
            }
            if (arr[i - 1] < arr[i]) {
                increasingLastIdx = i - 1;
            }
        }
        return (increasingLastIdx < decreasingFirstIdx);
    }
};