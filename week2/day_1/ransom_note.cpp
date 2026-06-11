class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
            vector<int>a(26,0);
            vector<int>b(26,0);
            bool t=true;
            for(int i=0;i<ransomNote.size();i++){
                  a[ransomNote[i]-'a']++;
            }
            for(int i=0;i<magazine.size();i++){
                  b[magazine[i]-'a']++;
            }
           for(int i=0;i<26;i++){
            if(a[i]>b[i]){
               t=false;
            }
           }
           return t;
    }
};