class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
       vector<vector<int>> ans(r, vector<int>(c));
       int m=0,n=0;
       if(mat.size()*mat[0].size()!=r*c)return mat;
       for(int i=0;i<mat.size();i++){
         for(int j=0;j<mat[0].size();j++){
            if(n>=c){
               n=0;
               m++;
               
            }
            ans[m][n]=mat[i][j];
            n++;
         }
       }
        return ans;
    }
};