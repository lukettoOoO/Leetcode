class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        maxWealth = 0
        for row in accounts:
            wealth = 0
            for balance in row:
                wealth += balance
            if wealth > maxWealth:
                maxWealth = wealth
        return maxWealth
