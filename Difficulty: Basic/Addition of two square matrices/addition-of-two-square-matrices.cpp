
class Solution {
public:
    vector<vector<int>> Addition(vector<vector<int>>& matrixA, vector<vector<int>>& matrixB) {
        if(matrixA.empty() || matrixB.empty()) return {};
        if(matrixA.size() != matrixB.size() || 
           matrixA[0].size() != matrixB[0].size()) {
            return {};
        }
        int row = matrixA.size();
        int col = matrixA[0].size();
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                matrixA[i][j] += matrixB[i][j];
            }
        }

        return matrixA;
    }
};