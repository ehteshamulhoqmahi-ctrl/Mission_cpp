#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n=7;
    vector<int>dp(n+1,-1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-2]+dp[i-1];
    }
    cout<<dp[n]<<endl;

return 0;

}