class Solution {
public:
    string maximumOddBinaryNumber(string s) {
   vector<int> Vec;
        for(char &ch : s){
            int x = ch - '0';
            Vec.push_back(x);
        }
        int count1 = 0, count0 = 0;
        sort(Vec.begin(), Vec.end());
        int k = Vec.size();
        vector<int> v;

        for (int i = k - 1; i >= 0; i--) {  
            if (Vec[i] == 1 ) {
                count1++;
            }
            if (Vec[i] == 0) {
                count0++;
            }
        }

        for (int i = 0; i < count1-1; i++) {
            v.push_back(1);
        }

        for (int i = 0; i < count0 ; i++) {
            v.push_back(0);
        }

        v.push_back(1);

        
        string result;
        for (int i : v) {
            result += to_string(i);
        }

        return result;
    }
};
