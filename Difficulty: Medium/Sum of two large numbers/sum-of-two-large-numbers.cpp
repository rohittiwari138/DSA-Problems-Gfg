class Solution {
  public:
  
  string add(string s1, string s2) {
    string ans;
    int index1 = s1.size() - 1;
    int index2 = s2.size() - 1;
    int sum, carry = 0;

    while (index2 >= 0) {
        sum = (s1[index1] - '0') + (s2[index2] - '0') + carry;
        carry = sum / 10;
        ans += char('0' + sum % 10);
        index1--;
        index2--;
    }

    while (index1 >= 0) {
        sum = (s1[index1] - '0') + carry;
        carry = sum / 10;
        ans += char('0' + sum % 10);
        index1--;
    }

    if (carry)
        ans += '1';

    reverse(ans.begin(), ans.end());

    int i = 0;
    while (i < ans.size() - 1 && ans[i] == '0')
        i++;

    return ans.substr(i);
}



  
  
  
  
  
    string findSum(string &s1, string &s2) {
         if(s1.size()<s2.size())
      return add(s2,s1);
      else
      return add(s1,s2);
    }
};