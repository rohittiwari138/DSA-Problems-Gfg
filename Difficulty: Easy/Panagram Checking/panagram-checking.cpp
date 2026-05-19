class Solution {
public:
    bool checkPangram(string& s) {
        
        vector<int> freq(26, 0);
        for(char ch : s) {
            //uppercase ko lowercase me convert kr rhe hai
            ch = tolower(ch);

            //alphabet check ho rha hai yaha apr
            if(ch >= 'a' && ch <= 'z') {
                freq[ch - 'a'] = 1;
            }
        }
    //check kr rhe all 26 letter present hai ya nahi
        for(int i = 0; i < 26; i++) {
            if(freq[i] == 0)
                return false;
        }
        return true;
    }
};