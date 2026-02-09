class Solution {
  public:
    bool searchInSorted(vector<int>& arr, int k) {
    int n = arr.size();
    int low=0;
    int high=n-1;
    int res=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==k)
        return 1;
        else if(arr[mid]<k)
        low=mid+1;
        else{
            high=mid-1;
        }
      }
      return 0;
    }
};