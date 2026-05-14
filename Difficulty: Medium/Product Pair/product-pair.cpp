class Solution {
public:
    bool isProduct(vector<int>& arr, long long target) {
        unordered_set<long long> st;
        for(int x : arr) {
            if(x != 0 && target % x == 0) {
                long long need = target / x;
                if(st.find(need) != st.end()) {
                    return true;
                }
            }
            else if(target == 0 && x == 0 && !st.empty()) {
                return true;
            }
            st.insert(x);
        }
        return false;
    }
};