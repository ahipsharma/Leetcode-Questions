class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0, cnt = 0;
        for(auto it:nums){
            if(it == 1) maxi = max(maxi,++cnt);
            else cnt = 0;
        }
        return maxi;
    }
};