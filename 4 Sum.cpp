class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> hash;
        for(int i : nums){
            hash.insert(i);
        }
        int l = 0;
        for(int i : nums){
            if(!hash.count(i-1)){
                int c1 = i;
                int c2 = 1;
                while(hash.count(c1+1)){
                    c1 += 1;
                    c2 += 1;
                }
                l = max(l,c2);
            }
        }
        return l;
    }
};