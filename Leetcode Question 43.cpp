class Solution {
public:
    string multiply(string num1, string num2) {
        int n1=num1.size()-1,n2=num2.size()-1;
        string res(n1+n2+2, '0');
        for (int i = n1; i >= 0; i--) {
            int carry = 0;
            for (int j =  n2; j >= 0; j--) {
                int t = carry + (res[i+j+1]-'0') + (num1[i]-'0') * (num2[j]-'0');
                carry = t/10;
				res[i+j+1] = (t%10) + '0';
            }
            res[i] += carry;
        }
        auto it = res.find_first_not_of("0");
        if (it == string::npos){return "0";}
        return res.substr(it);
    }
};