class Solution {
  public:
    vector<int> firstAndLast(int x, vector<int> &arr) {
    int n=arr.size();
    int low=0,high=n-1,mid=0,first=-1,last=-1;
    if(n==0)
    return {-1,-1};
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]<x)
        low=mid+1;
        else if(arr[mid]>x){
        high=mid-1;}
        else{
        first=mid;
        high=mid-1;
        }
    }
    if(first==-1)
    return {-1};
    
    low=0;
    high=n-1;
    mid=0;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]<x)
        low=mid+1;
        else if(arr[mid]>x){
        high=mid-1;}
        else{
            last=mid;
            low=mid+1;
        }
    }
        return{first,last};
    }
};