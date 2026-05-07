class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        for(int i=0;i<row-1;i++){
            for(int j=i+1;j<col;j++)
            swap(mat[i][j],mat[j][i]);
        }
        for(int i=0;i<row;i++){
            int start=0,end=col-1;
            while(start<=end){
                swap(mat[i][start],mat[i][end]);
                start++;
                end--;
            }
        }

        for(int i=0;i<row-1;i++){
            for(int j=i+1;j<col;j++)
            swap(mat[i][j],mat[j][i]);
        }
        for(int i=0;i<row;i++){
            int start=0,end=col-1;
            while(start<=end){
                swap(mat[i][start],mat[i][end]);
                start++;
                end--;
            }
        }
        
    }
};