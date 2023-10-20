class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        reverse(piles.begin(),piles.end());
        int i=1,j=piles.size()-1;
        int sum=0;
        // for(int i=1;i<piles.size();i=i+3){
        //     sum=sum+piles[i];
        // }
        while(i<j){
            sum=sum+piles[i];
            i=i+2;
            j--;
        }
        
        return sum;
    }
};