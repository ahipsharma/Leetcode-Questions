class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int min = 1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0){
                if(nums[i] == min){
                    min++;
                }
            }
        }
    return min;
    }
};