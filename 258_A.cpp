#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;
    cin>>a;
    bool found=false;
    for(int i=0;i<a.size();i++){
        if(a[i]=='0'){
           found=true;
           a.erase(i,1);
           break;
        }
    }
    if(found){
        cout<<a<<endl;
    }
    else{
        a.erase(0,1);
        cout<<a<<endl;
    }
    

return 0;
}