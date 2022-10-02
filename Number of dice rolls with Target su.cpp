class Solution {
public:
    int dp[32][1002];
    int solve(int n,int k,int target){
        if(n==0 and target==0)
            return 1;
        if(n<=0 ||target<=0)
            return 0;
        if(dp[n][target]!=-1)
            return dp[n][target];
        int sum=0;
        for(int i=1;i<=k;i++)
           sum = ((sum+ solve(n-1,k,target-i)) % 1000000007 )%1000000007;
        dp[n][target]=sum;
        return dp[n][target];
    }
public:
    int numRollsToTarget(int n, int k, int target){
         memset(dp,-1,sizeof(dp));
         return solve(n,k,target);
    }
};