#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool magic_num=true;
    while(n>=1){
        if(n%10==1){
            n=n/10;
        }
        else if(n%100==14){
            n=n/100;
        }
        else if(n%1000==144){
            n=n/1000;
        }
        else{
            magic_num=false;
            break;
        }
    }
    if(magic_num){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
}