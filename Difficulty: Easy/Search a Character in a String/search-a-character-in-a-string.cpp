
class Solution {
  public:
    int searchCharacter(string &s, char ch) {
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]==ch)
            return i;
        }
        return -1;
    }
};
