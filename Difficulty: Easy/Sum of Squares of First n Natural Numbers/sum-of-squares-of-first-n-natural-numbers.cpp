// User function Template for C++
class Solution {
  public:
    int sumOfSquares(int n) {
        int ans =0;
        for(int i=1;i<=n;i++){
            ans=ans + i*i;
            
        }
        return ans;
    }
};