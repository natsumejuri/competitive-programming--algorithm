//返回最大值为9,223,372,036,854,775,807
long long fib(int n){
    if(n==1||n==2) return 1;
    vector<int> dp(n);
    dp[1]=1;dp[2]=1;
    for(int i=3;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
