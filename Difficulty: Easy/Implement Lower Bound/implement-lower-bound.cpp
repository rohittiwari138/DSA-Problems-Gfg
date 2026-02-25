class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        int n = arr.size();
        int low=0,high=n-1,mid=0,res=n;
        while(low<=high){
            mid=low+(high-low)/2;
            if(arr[mid]<target)
            low=mid+1;
            else{
                res=mid;
                high=mid-1;
            }
        }
        return res;
    }
};
