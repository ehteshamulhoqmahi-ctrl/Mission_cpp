#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool found=false;
    for(int i=n-1;i>=0;i--){
        if(a[i]==x){
            cout<<i+1<<endl;
            found=true;
            break;
        }
    }
    if(!found){
        cout<<-1<<endl;
    }
return 0;
}