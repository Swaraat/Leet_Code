
class Solution {
public:
    int maximum69Number(int number) {
        std::vector<int> v;
        int count = 0;
        while (number > 0) {
            int digit = number % 10;
            v.push_back(digit);
            number /= 10;
        }
        reverse(v.begin(),v.end());
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == 6) {
                count++;
            }
            if (count == 1) {
                v[i] = 9;
            }
        }
for (int i=0;i<v.size();i++){
    cout<<v[i];
}

        int result = 0;
        for (int digit : v) {
            result = result * 10 + digit;
        }
        return result;
    }
};
