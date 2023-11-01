class Solution {
public:
    static bool compare(string a,string b){
        if(a.size() == b.size()) return a<b;
        return a.size()<b.size();
    }
    string helper(string a,string b){
        if(a.find(b) != string::npos)return a; 
        for(int i= min(size(a),size(b));i>=0;i--){
            if(a.substr(a.size()-i) == b.substr(0,i)) return a + b.substr(i);
        };
        return a + b;
    }
    string minimumString(string a, string b, string c) {
        vector<string> vstr;
        vstr.push_back(helper(helper(a,b),c));
        vstr.push_back(helper(helper(b,a),c));
        vstr.push_back(helper(helper(a,c),b));
        vstr.push_back(helper(helper(c,a),b));
        vstr.push_back(helper(helper(b,c),a));
        vstr.push_back(helper(helper(c,b),a));
        sort(vstr.begin(),vstr.end(),compare);
        for(string &str : vstr){
            cout<<str<<" ";
        }
        cout<<endl;
        return vstr[0];
    }
}; 