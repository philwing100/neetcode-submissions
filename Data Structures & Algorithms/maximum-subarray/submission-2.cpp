class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSub = nums[0];
        int curSum =0;

        for (const auto n : nums){
            if(curSum < 0){
                curSum =0;

            }
            curSum +=n;
            maxSub = std::max(maxSub,curSum);
       }
       return maxSub;
    }
};
