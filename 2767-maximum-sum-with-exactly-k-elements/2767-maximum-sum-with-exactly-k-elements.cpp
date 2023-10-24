class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l=nums.size();
        int x=nums[l-1];
        cout<<x<<endl;
        int ans=0;
        for(int i=0;i<k;i++){
            ans=ans+(x+i);
            cout<<ans<<" ";
        }
        return ans;
    }
};