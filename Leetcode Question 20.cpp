class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(auto ch : s){
            if(ch == '(' or ch=='{' or ch == '[') 
                stk.push(ch);
            else{
                if(stk.empty() or 
                    (ch!='}' and stk.top()=='{') or 
                    (ch!=')' and stk.top()=='(') or 
                    (ch!=']' and stk.top()=='[') ) 
                    return false;
                else 
                    stk.pop();
            }
            
        } 
        return stk.empty();
    }
};