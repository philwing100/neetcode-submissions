class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        const int M = grid.size();
        const int N = grid[0].size();

        if(M<1 || N<1){
            return 0;
        }

        for(int r=M-1;r>=0;r--){
            for(int c=N-1;c>=0;c--){

                if (r == M - 1 && c == N - 1) continue;
                 
                int right = (c + 1 < N) ? grid[r][c + 1] : INT_MAX;
                int down  = (r + 1 < M) ? grid[r + 1][c] : INT_MAX;

                grid[r][c] += std::min(right, down);
            }
        }
        return grid[0][0];
    }
};