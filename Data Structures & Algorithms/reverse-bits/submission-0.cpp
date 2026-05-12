class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res=0;
        //need to find the position of the most significant bit
        //then do 32-pos right or left rotations
        for(int i =0; i<32; i++){
            uint32_t bit = (n>>i)&1;
            res+=(bit<<31-i);
        }

        return res;


    }
};
