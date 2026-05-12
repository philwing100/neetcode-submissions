class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2){
            return 0;
        }
        int s = 0, b = 1;
        int maxP=0;

        while(b<prices.size()){
            if(prices[s]<prices[b]){
                maxP = max(prices[b]-prices[s],maxP);
            }else {
                s=b;
            }
            b++;
        }

        return maxP;
    }
};
