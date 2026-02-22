class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        int n = arr.size();
        int low=0;
        int high=n-1;
        int first=-1;
        int last=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]<x)
            low=mid+1;
            else if(arr[mid]>x)
            high=mid-1;
            else{
                first=mid;
                high=mid-1;
            }
        }    
         low=0;
         high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]<x)
            low=mid+1;
            else if(arr[mid]>x)
            high=mid-1;
            else{
                last=mid;
                low=mid+1; 
                
             }
         }    
     return{first,last};
    }
};