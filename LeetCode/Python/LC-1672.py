class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        
        richest_customer_wealth = 0
        m = len(accounts)
        n = len(accounts[0]) 
        
        for i in range(m):
            customer_wealth = 0
            for j in range(n):
                customer_wealth += accounts[i][j]
            
            if customer_wealth > richest_customer_wealth:
                richest_customer_wealth = customer_wealth
            
        return richest_customer_wealth