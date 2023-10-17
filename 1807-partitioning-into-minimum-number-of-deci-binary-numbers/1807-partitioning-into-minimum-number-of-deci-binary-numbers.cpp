class Solution {
public:
    int minPartitions(string n) {
        int a=0;
        for(int i=0;i<n.size();i++){
            int k=n[i]-'0';
            a=max(a,k);
        }
        return a;
    }
};