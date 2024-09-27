class Solution(object):
    def maxIncreaseKeepingSkyline(self, grid):
        total = 0
        n = len(grid[0])
        row_max = [max(row) for row in grid]
        col_max = [max(col) for col in zip(*grid)]
        for row in range(n):
            for col in range(n):
                if row_max[row] <= col_max[col]:
                    total += (row_max[row] - grid[row][col])
                else:
                    total += (col_max[col] - grid[row][col])
                    
        return total