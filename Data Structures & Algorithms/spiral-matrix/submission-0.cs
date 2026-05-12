public class Solution {
    public List<int> SpiralOrder(int[][] matrix) {
        List<int> res = new List<int>();

        int left = 0, right = matrix[0].Length;
        int top = 0, bottom = matrix.Length;

        while(left<right && top < bottom){
            for (int i = left; i< right;i++){
                res.Add(matrix[top][i]);
            }
            top+=1;
            for (int i = top;i<bottom;i++){
                res.Add(matrix[i][right-1]);
            } 
            right-=1;

            if(!(left < right && top<bottom)) //For the one total row/column matrixes
                break;
            for(int i = right-1;i>=left;i--){
                res.Add(matrix[bottom-1][i]);
            }
            bottom-=1;
            for(int i = bottom-1;i>=top;i--){
                res.Add(matrix[i][left]);
            }
            left+=1;
        }
        return res;
    }
}
