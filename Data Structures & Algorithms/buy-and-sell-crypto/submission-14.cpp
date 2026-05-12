class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l =0, r=1, maxP{0};
        while(r<prices.size()){
            if(prices[r]<prices[l]){
                l=r;
            }
            maxP=max(prices[r]-prices[l],maxP);
            r++;
        }
        return maxP;
    }
};
