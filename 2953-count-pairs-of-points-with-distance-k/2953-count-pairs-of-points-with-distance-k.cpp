class Solution {
public:
    int countPairs(vector<vector<int>>& c, int k) {
        long long res = 0;
        map<pair<long long,long long>,long long> mps;
        for(auto it : c){
            int x = it[0],y = it[1];
            for(int i=0;i<=k;i++){
                long long k1 = i;
                long long k2 = k-i;
                long long a = k1^x;
                long long b = k2^y;
                pair<int,int> pp = {a,b};
                if(mps.find(pp) != mps.end()){
                    res += mps[pp];
                }
            }
            mps[{x,y}]++;
        } 
        return res;

    }
};      