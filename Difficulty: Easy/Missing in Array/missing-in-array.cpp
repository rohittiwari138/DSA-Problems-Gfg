class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size() + 1;
        
        long long totalSum = 1LL * n * (n + 1) / 2;
        long long arrSum = 0;
        
        for(int i = 0; i < arr.size(); i++) {
            arrSum += arr[i];
        }
        
        return totalSum - arrSum;
    }
};
        