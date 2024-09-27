class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        # Solution 1
        total_profit = 0
        n = len(prices)
        j = 0

        for i in range(n - 1):
            j = i + 1

            if prices[j] > prices[i]:
                total_profit += prices[j] - prices[i]
        
        return total_profit

        # Solution 2
        # min_buy_price = prices[0]
        # total_profit = 0
        # new_stock_profit = 0

        # i = 1
        # while i < len(prices):
        #     if prices[i] > min_buy_price:
        #         if prices[i] - min_buy_price > new_stock_profit:
        #             new_stock_profit = prices[i] - min_buy_price
        #         else:
        #             total_profit += new_stock_profit
        #             new_stock_profit = 0
        #             min_buy_price = prices[i]
        #     else:
        #         min_buy_price = prices[i]
        #         total_profit += new_stock_profit
        #         new_stock_profit = 0
            
        #     i += 1

        # total_profit += new_stock_profit

        # return total_profit
        