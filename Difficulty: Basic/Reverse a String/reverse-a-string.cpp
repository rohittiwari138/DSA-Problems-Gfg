class Solution {
  public:
    string reverseString(string& s) {
        int n = s.size();
        int start =0;
        int end =n-1;
        while(start<end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
        return s;
        
    }
};
