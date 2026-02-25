class Solution {
  public:
    int missingNumber(vector<int>& arr) {
    int n = arr.size();
    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++){
        sum = sum +arr[i];
    }
    ans= (n+1)*(n+2)/2;
       return ans-sum; 
    }
};