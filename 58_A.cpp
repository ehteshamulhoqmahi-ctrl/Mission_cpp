#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    string temp="hello";
    int count=0,found=0;
    for(int i=0;i<temp.size();i++){
        for(int j=count;j<s.size();j++){
            if(temp[i]==s[j]){
                found++;
                count=j+1;
                break;
            }
        }
        if(found==5)
               break;
    }
    if(found==5)
       cout<<"YES"<<endl;
    else
       cout<<"NO"<<endl;

return 0;
}