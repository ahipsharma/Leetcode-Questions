class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int x) {
        vector<int> ans;
        map<int,int> map;
        for(int i = 0; i < nums.size(); i++){
            if(map.find(x - nums[i]) != map.end()){
                ans.push_back(map[x - nums[i]]);
                ans.push_back(i);
                return ans;
            }
            map[nums[i]] = i;
        }
        
        return ans;
    }
};