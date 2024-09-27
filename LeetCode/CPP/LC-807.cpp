#include<vector>

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>> grid) {
        uint32_t total = 0;
        uint8_t n = grid.size();
        uint8_t  row = 0, col = 0;
        vector<uint8_t> row_max(n), col_max(n);
        
        for(row = 0; row < n; row++) {
            for(col = 0; col < n; col++) {
                if(row_max[row] < grid[row][col]) {
                    row_max[row] = grid[row][col];
                }
                if(col_max[col] < grid[row][col]) {
                    col_max[col] = grid[row][col];
                }
            }
        }

        for(row = 0; row < n; row++) {
            for(col = 0; col < n; col++) {
                if(row_max[row] <= col_max[col]) {
                    total += (row_max[row] - grid[row][col]);
                }
                else {
                    total += (col_max[col] - grid[row][col]);
                }
            }
        }   
        
        return total;
    }
};