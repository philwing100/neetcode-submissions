class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<1){
            return 0;
        }
        int maxP{};



        int l = 0, r = 1;
        while(r<prices.size()){
            if(prices[r]<prices[l]){
                l=r;
            }else{
                maxP = std::max(prices[r]-prices[l],maxP);
            }
            r++;
        }

        return maxP;
    }
};
