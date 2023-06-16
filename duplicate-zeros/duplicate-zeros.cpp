class Solution {
public:
    void duplicateZeros(vector<int> &arr)
    {
        int size = arr.size();
        deque<int> temp;
        while (!arr.empty())
        {
            int back = arr.back();
            arr.pop_back();
            if (back == 0)
            {
                temp.push_front(0);
                temp.push_front(0);
            }
            else
            {
                temp.push_front(back);
            }
        }
        arr = vector<int>(temp.begin(), temp.begin() + size);
    }
};