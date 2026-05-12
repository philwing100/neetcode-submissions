class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {string}
     */
    minWindow(s, t) {
        //need a hasmap for t
        //need a hashmap for the current window

        //Iterate through the string updating current window, save the shortest string,
        // If a string of the current window is shorter the prev shortest, update that,
        // output res
        if(t==='') return '';

        let countT = {}; //t hashmap
        let window = {}; //window hashmap

        for(let c of t){
            countT[c] = (countT[c] || 0) + 1; //fill the countT hashmap with number of chars
        }

        let have = 0; // the current number of necessary chars in the window
        let need = Object.keys(countT).length;

        let res = [-1,-1];
        let resLen = Infinity;//arbitrarily large 

        let l = 0;

        for(let r = 0; r<s.length;r++){
            let c = s[r];
            window[c] = (window[c] || 0) + 1;

            if(countT[c]&&window[c] === countT[c]){
                have++;
            }

            while (have === need){
                if (r-l + 1 < resLen){
                    resLen = r - l + 1;
                    res = [l,r];
                }
                window[s[l]]--;
                if(countT[s[l]] && window[s[l]] < countT[s[l]]) {
                    have--;
                }
                l++;
            }
        }
    return resLen === Infinity ? '' : s.slice(res[0], res[1] + 1); //If if res is inf then empty str
    //otherwise return the slice
    }
}
