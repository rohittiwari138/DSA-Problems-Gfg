class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        int mid=0;
        int res=n;
        while(low<=high){
            mid=low+(high-low)/2;
            if(arr[mid]<=target)
            low=mid+1;
            else{
                res=mid;
                high=mid-1;
            }
        }
        return res;
        
    }
};
