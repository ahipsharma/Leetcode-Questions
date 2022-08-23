class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // map<int, int> m;
        // for(int i = 0;i<nums.size();i++){
        //     if(m.find(nums[i])!=m.end()){
        //         m[nums[i]] = 0;
        //     }
        //     else m[nums[i]]++;
        // }
        // for(auto it:m){
        //     if(it.second == 1)
        //         return it.first;
        // }
        // return 0;
        // Optimised:
        int a = 0;
        for(auto i:nums){
            a = a^i;
        }
        return a;
    }
};