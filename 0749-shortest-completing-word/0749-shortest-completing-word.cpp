class Solution {
public:
   string shortestCompletingWord(string licensePlate, vector<string>& words) {
        map<char,int> mps;
        string res = "";
        for(char ch : licensePlate){
            if(ch == ' '){
                continue;
            }
            else if(ch >= '0' && ch<='9'){
                continue;
            }
            else{
                mps[tolower(ch)]++;
            } 
        }
        for(auto const &pair : mps){
            cout<<pair.first<<" "<<pair.second<<endl;
        }
        int len = INT_MAX;
        for(string &str : words){
            map<char,int> mps1;
            for(char &ch : str){
                mps1[ch]++;
            }
            bool flag = true;
            for(auto const &pair : mps){
                if(mps1[pair.first] >= pair.second){
                    continue;
                }
                else{
                    flag = false;
                }
            }
            if(flag){
                if(str.length() < len){
                    res = str;
                    // cout<<1<<endl;
                    cerr<<res<<endl;
                    len = str.length();
                }
            }
        }
        return res;
    }
};