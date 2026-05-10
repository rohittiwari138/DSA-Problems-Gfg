class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {

        int n = a.size();
        int m = b.size();

        int i = 0;
        int j = 0;

        vector<int> ans;

        while(i < n && j < m) {

            int num1 = a[i];
            int num2 = b[j];

            if(num1 == num2) {

                if(ans.empty() || ans.back() != num1) {
                    ans.push_back(num1);
                }

                i++;
                j++;
            }

            else if(num1 < num2) {

                if(ans.empty() || ans.back() != num1) {
                    ans.push_back(num1);
                }

                i++;
            }

            else {

                if(ans.empty() || ans.back() != num2) {
                    ans.push_back(num2);
                }

                j++;
            }
        }

        while(i < n) {

            if(ans.empty() || ans.back() != a[i]) {
                ans.push_back(a[i]);
            }

            i++;
        }

        while(j < m) {

            if(ans.empty() || ans.back() != b[j]) {
                ans.push_back(b[j]);
            }

            j++;
        }

        return ans;
    }
};