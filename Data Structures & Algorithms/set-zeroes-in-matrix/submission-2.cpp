class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //okay i know what im gonna do
        //i need to traverse the matrix and grab all of the coordinates that are already 0

        std::unordered_set<int> row;
        std::unordered_set<int> col;

        for ( int i {}; i < matrix.size(); ++i){
            for (int j{}; j< matrix[0].size();++j){
                if(matrix[i][j]==0){
                    std::cout<<"inserting to r and c\n";
                    row.insert(i);
                    col.insert(j);
                }
            }
        }

        for(const auto r : row){
            //set the 
            std::cout<<"in r";
            for(int i{};i<matrix[0].size();++i){
                matrix[r][i]=0;
            }
        }
        for(const auto c : col){
            //set the 
            std::cout<<"in c\n";
            for(int i{};i<matrix.size();++i){
                matrix[i][c]=0;
            }
        }
    }
};
