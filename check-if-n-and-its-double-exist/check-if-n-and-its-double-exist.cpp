class Solution {
public:
    bool checkIfExist(vector<int> &arr) {
        map<int, vector<int>> m;
        for (int i = 0; i < arr.size(); i++) {
            m[arr[i]].push_back(i);
        }
        for (int i = 0; i < arr.size(); i++) {
            if (m.count(arr[i] * 2)) {
                for (const int idx : m[arr[i] * 2]) {
                    if (idx != i) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};