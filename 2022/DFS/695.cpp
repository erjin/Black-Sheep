// https://leetcode.com/problems/max-area-of-island/

class Solution {
public:
    int dfs(vector<vector<int>>& grid, int i, int j){
        if(i<0 || j <0 || i>= grid.size() || j >=grid[0].size() ) return 0;
        if(grid[i][j] ==0 ) return 0;
        grid[i][j] =0;
        return 1+dfs(grid,i+1,j)+dfs(grid,i,j+1)+dfs(grid,i-1,j)+dfs(grid,i,j-1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int a = 0;
        for(int i =0; i < r; i++)
            for(int j=0; j< c; j++)
                a = max(a, dfs(grid, i, j));
        return a;
    }
};