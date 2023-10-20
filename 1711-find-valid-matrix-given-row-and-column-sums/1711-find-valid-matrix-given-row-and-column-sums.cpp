class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowsum, vector<int>& columnsum) {
          vector<vector<int>>v;
        for(int i=0;i<rowsum.size();i++){
            vector<int>temp;
            for(int j=0;j<columnsum.size();j++){
                int x=min(rowsum[i],columnsum[j]);
                temp.push_back(x);
                rowsum[i]-=x;
                columnsum[j]-=x;
            }
            v.push_back(temp);
        }
        return v;
    }
};