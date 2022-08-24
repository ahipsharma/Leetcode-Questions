class Solution {
public:
    bool isPowerOfThree(int n) {
        // if(n == 0)
        //     return false;
        // double x = log(n)/log(3);
        // if(floor(x) == x)
        //     return true;
        // return false;
        while(n>=3){
            if(n%3 != 0)
                return false;
            else
                n = n/3;
        }
        return n==1;
    }
};