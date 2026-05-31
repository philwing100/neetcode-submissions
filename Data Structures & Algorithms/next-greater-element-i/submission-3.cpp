class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;

        for(const auto& num : nums1){
            int index = -1;
            bool flag=false;
            for(int i=0; i<(int)nums2.size();i++){
                if(num == nums2[i]){
                    flag=true;
                } 
                if(flag && num < nums2[i]){
                    cout << "num is " << num << " and nums2[i] is " << nums2[i];
                    index = nums2[i];
                    break;
                }
            }
            res.push_back(index);
        }

        return res;
    }
};