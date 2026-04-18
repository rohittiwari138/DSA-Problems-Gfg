class Solution {
  public:
    int smallestSumSubarray(vector<int>& a) {
        int n = a.size();
        int ans=a[0];
        int bestend=a[0];
        for(int i=1;i<n;i++){
            int v1=a[i];
            int v2=a[i]+bestend;
            bestend=min(v1,v2);
            ans=min(ans,bestend);
        }
        return ans;
        
    }
};
