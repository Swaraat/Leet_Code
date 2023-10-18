class Solution {
public:
    int minimumSum(int num) {
        int mini=INT_MAX;
        vector<int>x;
        int p=num/1000;
        x.push_back(p);
         num=num%1000;
         int q=num/100;
         x.push_back(q);
         num=num%100;
         int r=num/10;
          x.push_back(r);
         num=num%10;
          x.push_back(num);

          sort(x.begin(),x.end());
          int ans1=10*x[0]+x[2];
    int ans2=10*x[1]+x[3];
    return (ans1+ans2);
    }
};