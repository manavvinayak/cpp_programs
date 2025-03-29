
#include <iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

long long f(vector<int>&v,int idx,long long x,vector<vector<long long>>&dp){
    if(x==0) return 0;
    if(idx>=v.size() || x<0) return INT_MAX;
    if(dp[idx][x]!=-1) return dp[idx][x];
    long long ans=INT_MAX;
    for(int i=idx;i<v.size();i++){
        ans=min(ans,1+f(v,i,x-v[i],dp));
    }
    return dp[idx][x]=ans;
}

int main() {
    long long n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<vector<long long>>dp(n+5,vector<long long>(x+5,-1));
    long long ans=f(v,0,x,dp);
    cout<<ans;
}