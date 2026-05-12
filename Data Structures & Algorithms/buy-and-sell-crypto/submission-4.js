class Solution {
    /**
     * @param {number[]} prices
     * @return {number}
     */
    maxProfit(prices) {
        let l = 0, r = 1, res = 0;

        while(r < prices.length){
            if(prices[l]< prices[r]){
                let profit = prices[r]-prices[l];
                res = Math.max(profit,res);
            }else{
                l=r;
            }
            r++;
        }
        return res;
    }
}
