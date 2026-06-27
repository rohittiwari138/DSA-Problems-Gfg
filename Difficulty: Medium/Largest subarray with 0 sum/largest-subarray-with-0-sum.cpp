class Solution {
public:
    int maxLength(vector<int>& arr) {
        unordered_map<int, int> mp;

        int sum = 0;
        int maxi = 0;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];

            // Agar prefix sum 0 hai
            if (sum == 0) {
                maxi = i + 1;
            }

            // Agar pehle bhi ye prefix sum aaya hai
            if (mp.find(sum) != mp.end()) {
                maxi = max(maxi, i - mp[sum]);
            }
            // Prefix sum pehli baar aaya hai
            else {
                mp[sum] = i;
            }
        }

        return maxi;
    }
};