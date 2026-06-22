class Solution {
  public:
    void sumArray(vector<int> &arr) {
        int totalSum = 0;
        // Poore array ka sum nikaalo
        for(int i = 0; i < arr.size(); i++) {
            totalSum += arr[i];
        }
        // Har index par baaki sab elements ka sum store karo
        for(int i = 0; i < arr.size(); i++) {
            arr[i] = totalSum - arr[i];
        }
    }
};