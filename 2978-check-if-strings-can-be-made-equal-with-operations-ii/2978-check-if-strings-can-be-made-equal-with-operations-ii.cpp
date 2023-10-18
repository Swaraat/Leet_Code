// class Solution {
// public:
//     bool checkStrings(string s1, string s2) {
//         vector<string>s1odd;
//         vector<string>s2odd;
//         vector<string>s1even;
//         vector<string>s2even;
//         bool a=false;
//         for(int i=0;i<s1.size();i=i+2){
//             s1even.push_back(s1[i]);
//         }
//         sort(s1even.begin(),s1even.end());
//         for(int i=1;i<s1.size();i=i+2){
//             s1odd.push_back(s1[i]);
//         }
//         sort(s1odd.begin(),s1odd.end());
//         for(int i=0;i<s1.size();i=i+2){
//             s2even.push_back(s2[i]);
//         }
//         sort(s2even.begin(),s2even.end());
//         for(int i=1;i<s1.size();i=i+2){
//             s2odd.push_back(s2[i]);
//         }
//         sort(s2odd.begin(),s2odd.end());
//         if(s1even==s2even && s1odd==s2odd)
//         {
//             a=true;
//         }else{
//             a=false;
//         }

//         return a;

//     }
// };


class Solution {
public:
    bool checkStrings(string s1, string s2) {
        vector<char> s1odd;
        vector<char> s2odd;
        vector<char> s1even;
        vector<char> s2even;
        bool a = false;
        
        for (int i = 0; i < s1.size(); i = i + 2) {
            s1even.push_back(s1[i]);
        }
        sort(s1even.begin(), s1even.end());
        
        for (int i = 1; i < s1.size(); i = i + 2) {
            s1odd.push_back(s1[i]);
        }
        sort(s1odd.begin(), s1odd.end());
        
        for (int i = 0; i < s2.size(); i = i + 2) {
            s2even.push_back(s2[i]);
        }
        sort(s2even.begin(), s2even.end());
        
        for (int i = 1; i < s2.size(); i = i + 2) {
            s2odd.push_back(s2[i]);
        }
        sort(s2odd.begin(), s2odd.end());
        
        if (s1even == s2even && s1odd == s2odd) {
            a = true;
        }
        
        return a;
    }
};
