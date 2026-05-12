class Solution {
public:
    void zeroOutIsland(vector<vector<char>>& grid, int i, int j){
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]=='0'){
            return;
        }

        grid[i][j] = '0';
        zeroOutIsland(grid,i+1,j);
        zeroOutIsland(grid,i-1,j);
        zeroOutIsland(grid,i,j+1);
        zeroOutIsland(grid,i,j-1);
        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        int res{};
        for(int i{}; i<grid.size();i++){
            for(int j{}; j<grid[0].size(); j++){
                if(grid[i][j]=='1'){
                    res++;
                    zeroOutIsland(grid,i,j);
                }
            }
        }
    
        return res;
    }




};


