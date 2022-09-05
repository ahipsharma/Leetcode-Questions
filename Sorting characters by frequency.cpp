class Solution {
public:
    string frequencySort(string s) {
        string res;
        // Calculating frequency of each character.
        unordered_map<char, int> freq;
        for(auto i:s)
            freq[i]++;
        
        // Storing values in a priority queue.
        priority_queue<pair<int, char>> q;
        for (auto [a, frq] : freq) 
            q.push({frq, a});
        
        // Making a string from the priority queue.
        pair<int,char> curr;
        while (!q.empty()) {
            curr = q.top();
            q.pop();
            res += string(curr.first, curr.second);
        }
        
        return res;
    }
};