class Solution {
  public:
    string remConsonants(string &s) {
        int n = s.size();
        string ans;
        for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U' ){
            ans.push_back(s[i]);
            
        }
       }
        return ans;
        
    }
};