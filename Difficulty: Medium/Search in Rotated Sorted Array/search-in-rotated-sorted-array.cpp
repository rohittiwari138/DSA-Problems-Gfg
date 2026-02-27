class Solution {
  public:
    int search(vector<int>& arr, int key) {
        int n = arr.size();
        int res=0;
        for(int i=0;i<n;i++){
            if(arr[i]==key)
            return i;
            
        }
      return -1;
        
    }
};