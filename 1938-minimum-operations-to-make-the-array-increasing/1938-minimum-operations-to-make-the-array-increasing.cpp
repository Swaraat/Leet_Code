class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt=0,x=0;
        for(int i=1;i<nums.size();i++){
                if(nums[i]<=nums[i-1]){
                  x= abs(nums[i]-nums[i-1]);
                    nums[i]=x+nums[i]+1;
                    cnt=cnt+x+1;
                }
        }
        return cnt;
    }
    };