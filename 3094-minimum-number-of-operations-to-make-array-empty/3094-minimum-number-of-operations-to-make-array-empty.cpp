
class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second==1){
                return -1;
            }
        }
        int ans=0;
        for(auto it:mp){
            int d=it.second;
            if(d%3==0){
                ans+=d/3;
            }
            else if(d%3==1){
                ans+=(d-4)/3+2;
                // 7 
                //     3+4
            }else{
                // 8
                ans+=(d-2)/3+1;
            }
        }
        return ans;
    }
};