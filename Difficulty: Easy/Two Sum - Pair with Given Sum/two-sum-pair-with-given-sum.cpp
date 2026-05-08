class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        int i=0;
        int j=n-1;
        sort(arr.begin(),arr.end());
        while(i<j){
            if(arr[i]+arr[j]==target)
            return true;
            else if(arr[i]+arr[j]<target)
            i++;
            else {
                j--;
            }
        }
        return false;
        
    }
};