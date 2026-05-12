class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l, r, maxP = 0, 1, 0

    
        while r < len(prices):
            if prices[l] < prices[r]:
                profit = prices[r] - prices [l]
                maxP = max(profit, maxP)
            else:
                l=r #l only moves to the previous place of r and then r moves to the right one more
            r+=1
            


        return maxP
