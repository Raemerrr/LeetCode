class Solution {
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        vector<int> temp = nums1;
        nums1 = nums2;
        nums2 = temp;
        nums1.insert(nums1.end(), nums2.begin(), nums2.begin() + m);
        sort(nums1.begin(), nums1.end());
    }
};