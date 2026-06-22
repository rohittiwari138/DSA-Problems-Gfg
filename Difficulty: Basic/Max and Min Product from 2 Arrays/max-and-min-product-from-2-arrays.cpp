class Solution {
  public:
    int minMaxProduct(vector<int> &arr1, vector<int> &arr2) {
        int n = arr1.size();
        int m = arr2.size();
        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            if(arr1[i]>ans)
            ans=arr1[i];
            
        }
        int ans2 = INT_MAX;
        for(int i=0;i<m;i++){
            if(arr2[i]<ans2)
            ans2=arr2[i];
        
        }
      return ans*ans2;
    }
};