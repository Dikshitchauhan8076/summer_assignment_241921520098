class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<string>vec;
        for(int i=0;i<strs.size();i++){
            string st=strs[i];
            sort(st.begin(),st.end());
            vec.push_back(st);
        }
        unordered_map<string,int>mp;
        int j=0;
        vector<vector<string>>ans;
        for(int i=0;i<vec.size();i++){
            if(mp.find(vec[i])==mp.end()){
              
                mp[vec[i]]=j;
                ans.push_back(vector<string>());
                ans[j].push_back(strs[i]);
                  j++;
            }
            else{
                ans[mp[vec[i]]].push_back(strs[i]);

            }
        }
        return ans;
    }
};