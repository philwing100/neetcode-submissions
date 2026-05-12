public class Solution {
    public int MinEatingSpeed(int[] piles, int h) {
        int left = 1, right = piles.Max();
        int res = right;

        while(left<=right){
            int k = (left+right)/2;
            
            long totalTime = 0;
            foreach(int p in piles){
                totalTime += (int)Math.Ceiling((double)p/k);
            }
            if(totalTime <= h){
                res = k;
                right = k - 1;
            } else {
                left = k + 1;
            }
        }
        return res;
    }
}
