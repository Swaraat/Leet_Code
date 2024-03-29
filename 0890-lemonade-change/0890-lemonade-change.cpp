class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int c10=0,c5=0,c20=0;
        if(bills[0]!=5) return false;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                c5++;
            }
            else if(bills[i]==10){
                if(c5>0){
                    c5--;
                    c10++;
                }
                else{
                    return false;
                }
            }
           else if(bills[i]==20){
               if(c5>0 && c10>0){
                   c5--;
                   c10--;
                   c20++;
               }
               else if(c5>2 && c10==0){
                   c5=c5-3;
                   c20++;
               }
               else {
                   return false;
               }
           } 
           
        }

          return true;
    }
};