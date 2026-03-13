class Solution {
  public:
  bool canPlace(vector<int>&stalls,int k,int n, int guess){
      int cows=1;
      int pos=stalls[0];
      for(int i=1;i<n;i++){
          int dist=stalls[i]-pos;
          if(dist<guess)
          continue;
          cows++;
          pos=stalls[i];
          if(cows>=k)
          return true;
      }
      return false;
  }
    int aggressiveCows(vector<int> &stalls, int k) {
        int n = stalls.size();
        sort(stalls.begin(),stalls.end());
        int low=1;
        int high= stalls[n-1]-stalls[0];
        int res=-1;
        while(low<=high){
        int mid=low+(high-low)/2;
        if(canPlace(stalls,k,n,mid)){
            res=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
        return res;
        
    }
};