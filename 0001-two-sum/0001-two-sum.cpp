class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
       vector<int> result;
       

        for (int i = 0; i < n.size(); i++) {
            for (int j = i + 1; j < n.size(); j++) {
                if (n[i] + n[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
             
                    break; // Exit the inner loop
                }
            }
        }

        return result;
    }
};