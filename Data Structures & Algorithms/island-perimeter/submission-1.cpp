class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        unordered_map<int,int> visited;
        int res=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    res+=perimeterCounter(grid,i,j);
                }
            }
        }
        return res;
    }
private: 
    int perimeterCounter(vector<vector<int>>& grid, int i, int j){
        int perimeter{0};
        if(i-1<0||grid[i-1][j]==0) perimeter++;
        if(j-1<0||grid[i][j-1]==0) perimeter++;
        if(i+1>grid.size()-1||grid[i+1][j]==0) perimeter++;
        if(j+1>grid[0].size()-1||grid[i][j+1]==0) perimeter++;

        return perimeter;
    }

};