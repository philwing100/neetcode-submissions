class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res{};
        int currArea{};
        int m = grid[0].size(), n = grid.size();  //m rows and n columns
        vector<vector<int>> visited(n, vector<int>(m, 0));
        vector<pair<int,int>> dirs = {{-1,0},{0,-1},{1,0},{0,1}};

        deque<pair<int,int>> que;  
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!visited[i][j] && grid[i][j] == 1){
                    que.push_back({i, j}); 
                    
                    while(!que.empty()){
                        auto [x, y] = que.front();
                        que.pop_front();
                        
                        if(!visited[x][y] && grid[x][y] == 1){
                            visited[x][y] = 1;
                            currArea++;
                            
                            for(const auto& [dx, dy] : dirs){
                                int nx = x + dx, ny = y + dy;
                                if(nx >= 0 && nx < n && ny >= 0 && ny < m){
                                    if(!visited[nx][ny] && grid[nx][ny] == 1){
                                        que.push_back({nx, ny});
                                    }
                                }
                            }
                        }
                    }
                    res = std::max(res, currArea);
                    currArea = 0;
                }
            }
        }
        return res;
    }
};