class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int res{0};
        stack<pair<int,int>> stack;
        vector<vector<int>> visited(grid.size(), vector<int>(grid[0].size(), 0));


        for(int n=0;n<grid.size();n++){
            for(int m=0;m<grid[0].size();m++){
                if(visited[n][m]==0&&grid[n][m]=='1'){
                    res++;
                    stack.push({n,m});
                    while(!stack.empty()){
                        auto curr = stack.top();
                        stack.pop();
                        int i = curr.first;
                        int j = curr.second;
                        if(visited[i][j]==0 && grid[i][j]=='1'){
                            if(i+1 < grid.size()) stack.push({i+1,j});
                            if(i-1 >= 0) stack.push({i-1,j});
                            if(j+1 < grid[0].size()) stack.push({i,j+1});
                            if(j-1 >= 0) stack.push({i,j-1});
                        }
                        visited[i][j]=1;
                    }
                }
            }
        }

        return res;
    }
};
