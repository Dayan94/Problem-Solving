class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_buy_price = prices[0]
        max_profit = 0

        for i in range(1, len(prices)):
            if prices[i] > min_buy_price:
                if prices[i] - min_buy_price > max_profit:
                    max_profit = prices[i] - min_buy_price
            else:
                min_buy_price = prices[i]
        
        return max_profit
        