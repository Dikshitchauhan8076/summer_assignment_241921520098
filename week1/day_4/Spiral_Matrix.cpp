class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      int n=matrix.size(),m=matrix[0].size();
      int up=0,down=n-1,right=m-1,left=0;
      vector<int>ans;
      while(up<=down&&right>=left){
        for(int i=left;i<=right;i++){
           ans.push_back(matrix[up][i]);}
           up++;
        if(up>down||right<left) break;
        for(int i=up;i<=down;i++){
             ans.push_back(matrix[i][right]);}
           right--;
           if(up>down||right<left) break;
        
        for(int i=right;i>=left;i--){
             ans.push_back(matrix[down][i]);}
           down--;
           if(up>down||right<left) break;
        
        for(int i=down ;i>=up;i--){
             ans.push_back(matrix[i][left]);}
           left++;
           if(up>down||right<left) break;
        

      }  
      return ans;
    }
};