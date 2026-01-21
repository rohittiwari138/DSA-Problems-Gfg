class Solution {
  public:
    int missingNum(vector<int>& arr) {
       int n = arr.size();
       int long sum = 0;
       for(int i=0;i<n;i++){
           sum = sum+arr[i];
       }
       int long ans=long(n+1)*(n+2)/2;
       return ans-sum;
    }

};