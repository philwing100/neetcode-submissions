class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten =0;
        for(int bill : bills){
            if(bill==5){
                five++;
            }else if(bill == 10 && five > 0){
                ten++;
                five--;
            } else if(bill == 20 && ten > 0 && five >0){
                ten--;
                five--;
            }else if (bill == 20 && five > 2){
                five-=3;
            }else{
                return false;
            }
        }

        return true;
    }
};