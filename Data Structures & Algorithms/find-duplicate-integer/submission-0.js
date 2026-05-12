class Solution {
    /**
     * @param {number[]} nums
     * @return {number}
     */
    findDuplicate(nums) {
        let fast = 0;
        let slow = 0;
        while (true) {
            slow = nums[slow];
            fast = nums[nums[fast]];
            if (slow === fast) {
                break;
            }
        }
        let slow2 = 0;
        while (true) {//based on teh algebra from neetcode is why this part works. when these two meet will always be in the correct positions
            slow = nums[slow];
            slow2 = nums[slow2];
            if (slow === slow2) {
                return slow;
            }
        }
    }
}
