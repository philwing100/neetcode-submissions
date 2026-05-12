class Solution {
    /**
     * @param {string} s
     * @return {boolean}
     */
    isPalindrome(s) {
        s = s.toLowerCase().replace(/[^a-zA-Z0-9]/g, '');
        if(s.substring(0,Math.floor(s.length/2))
         == s.substring(Math.ceil(s.length/2),s.length)
         .split('').reverse().join('')){
            return true;
        }
        return false;
    }
}
