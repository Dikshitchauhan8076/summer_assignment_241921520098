class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>mp;
        int st=0, end=0;
        for(int i=0;i<s1.size();i++){
            mp[s1[i]]++;
        }
        while(end<=s2.size()){
          if(mp.empty())return true;
          if(end==s2.size())return false;
          if(mp.find(s2[end])!=mp.end()){
             if(mp[s2[end]]==1)mp.erase(s2[end]);
            else mp[s2[end]]--;
          end++;

          }
          else{
            if(st!=end){
            mp[s2[st]]++;
            st++;}
            else{
                st++;
                end++;
            }
          }

        }
    return false;
    }
};