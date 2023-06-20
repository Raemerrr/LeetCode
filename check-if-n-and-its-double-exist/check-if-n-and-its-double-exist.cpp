class Solution {
public:
    bool checkIfExist(vector<int> &arr) {
        for (size_t i = 0; i < arr.size(); i++) {
            auto it = find(arr.cbegin(), arr.cend(), arr[i] * 2);
            auto dist = distance(arr.cbegin(), it);
            if (it != arr.cend() && dist != i) {
                return true;
            }
        }
        return false;
    }
};