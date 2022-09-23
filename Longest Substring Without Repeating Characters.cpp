class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int maxlen = INT_MIN, len = str.length();
        
        
        set<char> set;
        if(len == 0)
            return len;
        
        int i = 0;
        for(int j = 0;j<len;j++){
            if(set.find(str[j]) != set.end()){
                while(i<j && set.find(str[j]) != set.end()){
                    set.erase(str[i]);
                    i++;
                }
            }
            set.insert(str[j]);
            maxlen = max(maxlen, (j-i)+1);
        }
        
        
        return maxlen;
    }
};