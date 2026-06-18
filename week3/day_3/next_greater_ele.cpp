class Solution {
   
vector<int>ans;

    void stacki(int n,vector<int>nums2){
    stack<int>st;
        for(int i = nums2.size()-1; i >=0 ; i--) {
      
            if(nums2[i]==n&&st.empty()){
                 ans.push_back(-1);
               
                 st = stack<int>();
                 break;
                 }
            if(nums2[i]==n){
                ans.push_back(st.top());
            
                st = stack<int>();
                 break;
            }
           if(nums2[i]>n){
            st.push(nums2[i]);
           }  
         
        }
  

    }
   public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n;
        for(int i=0;i<nums1.size();i++){
           n=nums1[i];
            stacki(n,nums2);

        }
        return ans;

        
    }
};