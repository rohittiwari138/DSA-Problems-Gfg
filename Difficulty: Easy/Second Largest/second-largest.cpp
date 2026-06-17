class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        int ans = INT_MIN;
        if(n<2)
        return -1;
        for(int i=0;i<n;i++){
            if(arr[i]>ans)
            ans=arr[i];
        }
        int second = INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]!=ans)
            second = max(second , arr[i]);
        }
        if(second==INT_MIN){
        return -1;}
        return second;
    }
};