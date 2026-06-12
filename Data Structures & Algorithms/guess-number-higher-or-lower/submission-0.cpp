/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int curr = n/2;
        int l=0, r= n;
        while(true){
            int attempt = guess(curr);
            if(attempt==0){
                return curr;
            }else if(attempt==-1){
                //higher
                curr=(curr+r)/2;
            }else{
                curr=(curr+l)/2;
            }
        }
        return -1;
    }
};