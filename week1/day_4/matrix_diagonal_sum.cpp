class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
       vector<vector<int>>vis(mat.size(),vector<int>(mat[0].size(),0));
       int a=0,b=mat[0].size()-1,ans=0;

       for(int i=0;i<mat.size();i++){
        if(vis[i][a]==0){
            ans+=mat[i][a];
            vis[i][a]=1;
        }
            a++;

        if(vis[i][b]==0){
            ans+=mat[i][b];
            vis[i][b]=1;
        }
        
            b--;
       } 
       return ans;
    }
};