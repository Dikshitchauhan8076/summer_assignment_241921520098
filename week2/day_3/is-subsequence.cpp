class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1=s.size(),n2=t.size(),j=0;
        for(int i=0;i<n2;i++){
        if(s[j]==t[i]){
            j++;
        }
        }
        if(j==n1) return true;
        return false;
    }
};