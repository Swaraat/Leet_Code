class Solution {
public:

vector<int> find(vector<int> nums, int k){
        vector<int> ans;
        int n = nums.size();
        for(int i=0;i<n;i++){
            while(ans.size()>0 && ans.back()<nums[i] && ((k-ans.size())<(n-i))){
            ans.pop_back();}
            if(ans.size()<k){ans.push_back(nums[i]);}  }
        return ans;}   

vector<int> merge(vector<int> x,vector<int> y){
        vector<int>ans;
        int k=x.size()+y.size();
        while(k--){
            vector<int>temp=max(x,y);
            if(x>y){
                reverse(x.begin(),x.end());
                x.pop_back();
                reverse(x.begin(),x.end());}
            else{
                reverse(y.begin(),y.end());
                y.pop_back();
                reverse(y.begin(),y.end()); }
            ans.push_back(temp.front());}
        return ans; }



 
    vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<int>x;
       for(int i=0;i<=k;i++){
           vector<int>s=merge(find(nums1,i),find(nums2,k-i)  );
        
          if(s.size()==k){ x=max(x,s); } }
        return x;
    }
};