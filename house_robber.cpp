#include<iostream>
#include<vector>
using namespace std;

int rob(vector<int>& num) {
    int n = num.size();

    if (n == 1)
        return num[0];

    vector<int> dp(n);

    dp[0] = num[0];
    dp[1] = max(num[0], num[1]);

    for (int i = 2; i < n; i++) {
        dp[i] = max(dp[i - 1], num[i] + dp[i - 2]);
    }

    return dp[n - 1];
}
int main(){
    vector<int>dp={1,2,3};
    cout<< rob(dp)<<endl;

}