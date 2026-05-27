class Solution {
  public:
    vector<int> findElements(vector<int> arr) {
        vector<int>ans;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-2;i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};