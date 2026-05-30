class Solution {
public:
    int getOddOccurrence(vector<int>& arr) {
        int ans = 0;

        for(int num : arr) {
            ans ^= num;
        }

        return ans;
    }
};