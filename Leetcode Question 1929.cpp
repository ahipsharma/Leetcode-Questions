class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int k = 0;
        for(int i = 0; i < 2*nums.size(); i++){
            if(i<nums.size())
                ans.push_back(nums[i]);
            if(i>nums.size() && k < nums.size()){
                ans.push_back(nums[k]);
                k++;
            }
        }
        ans.push_back(nums[k]);
        return ans;
    }
};