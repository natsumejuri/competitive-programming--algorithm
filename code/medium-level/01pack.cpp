#include <bits/stdc++.h>
using namespace std;
int dfs(vector<int> &w,vector<int>&v,int i,int c){
    if (i==0||c==0) return 0;
    if(w[i-1]>c) return dfs(w,v,i-1,c);
    int no=dfs(w,v,i-1,c);
    int yes=dfs(w,v,i-1,c-w[i-1])+v[i-1];
    return max(no,yes);


}
int main(){
    int a,b,wgt,val;vector<int> w,v;
    cin>>a>>b;
    for(int i=0;i<b;i++){
        cin>>wgt>>val;w.push_back(wgt);v.push_back(val);
    }
    cout<<dfs(w,v,b,a);
}
/*状态转移方程：dp[i,c]=max(dp[i-1,c],dp[i-1,c-wgt[i]]+val[i-1])*/
