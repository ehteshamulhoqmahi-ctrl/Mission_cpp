#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr.begin(),arr.end());
    int x=0;
    for(int i=n-1;i>=0;i--){
       x= x+arr[i];

       if(x>(sum-x)){
        cout<<n-i<<endl;
        break;
       } 
        
    }
    return 0;
}