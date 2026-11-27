#include<iostream>
#include<vector>
using namespace std;

int minCostClimbingStairs(vector<int>& cost){
    vector<int>dp(cost.size(),-1);
    int n=cost.size();
    dp[0]=cost[0];
    dp[1]=cost[1];
    for(int i=2;i<n;i++){
        dp[i]=cost[i]+ min(dp[i-1],dp[i-2]);
    }
    return min(dp[n-1],dp[n-2]);
}

int main(){
    vector<int>dp={1,2,3};
    cout<< minCostClimbingStairs(dp)<<endl;

}