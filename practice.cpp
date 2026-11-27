#include<iostream>
#include<vector>
using namespace std;

int rob(vector<int>& nums){
    int n=nums.size();
    vector<int>dp1(n,-1);
    vector<int>dp2(n,-1);
    dp1[0]=nums[0];
    dp1[1]=nums[1];
    for(int i=2;i<n-1;i++){
        dp1[i]=max(dp1[i-1],nums[i]+dp1[i-2]);
    }
    dp2[1]=nums[1];
    dp2[2]=nums[2];
    for(int i=3;i<n;i++){
        dp2[i]=max(dp2[i-1],nums[i]+dp2[i-2]);
    }
    return max(dp1[n-2],dp2[n-1]);
}
int main(){
    vector<int>dp={1,2,3};
    cout<< rob(dp)<<endl;

}