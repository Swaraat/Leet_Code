class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
    vector<int> v1(n);
    v1[n-1]=nums[n-1];
    for(int i=n-2;i>=0;--i)
    {
        v1[i]=max(nums[i],v1[i+1]);
    }
    int mi=nums[0];
    long long ans=-1;
    for(int j=1;j+1<n;++j)
    {
        long long x=1ll*(mi-nums[j])*v1[j+1];
        if(x>=0&&ans<x)
        {
            ans=x;
        }
        mi=max(nums[j],mi);
    }
    if(ans==-1) ans=0;
    return ans;
    
    }
};