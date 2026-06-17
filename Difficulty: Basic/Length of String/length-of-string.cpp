class Solution {
  public:
    int lengthString(string &s) {
        int n = s.size();
        int size=0;
        while(s[size]!='\0'){
        size++;
        }
        return size;
    }
};