#include<iostream>
#include<vector>
using namespace std;

int minCost(vector<int>& height){
        int n=height.size();
        vector<int>dp(n+1,0);
        dp[0]=0;
        dp[1]=abs(height[1]-height[0]);
        for(int i=2;i<n;i++){
            dp[i]=min((dp[i-1]+abs(height[i]-height[i-1])), (dp[i-2]+abs(height[i]-height[i-2])));
        }
        return dp[n-1];
    }

int main(){
    vector<int>dp={1,2,3};
    cout<< minCost(dp)<<endl;

}