public class Solution {
    public bool SearchMatrix(int[][] matrix, int target) {
int rows = matrix.Length, cols = matrix[0].Length;
        
        // Binary search to find the correct row
        int top = 0, bottom = rows - 1;
        while (top <= bottom) {
            int mid = top + (bottom - top) / 2;
            
            if (matrix[mid][0] <= target && matrix[mid][cols - 1] >= target) {
                // Found the correct row, apply binary search on this row
                int left = 0, right = cols - 1;
                while (left <= right) {
                    int m = left + (right - left) / 2;
                    if (matrix[mid][m] == target) {
                        return true;
                    } else if (matrix[mid][m] < target) {
                        left = m + 1;
                    } else {
                        right = m - 1;
                    }
                }
                return false; // If the target is not found in this row
            }
            else if (matrix[mid][0] > target) {
                bottom = mid - 1;
            } 
            else {
                top = mid + 1;
            }
        }

        return false;
    }
}
