class Solution {
  public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        return arr[i];
    }
    
        return 0;
    }
};