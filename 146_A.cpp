#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool found=false;
    int fh=0,lh=0;
    for(int i=0;i<n;i++){
        if(i<n/2)
            fh=fh+(s[i]-'0');
        else
            lh=lh+(s[i]-'0');
        if(s[i]=='4'||s[i]=='7'){
            found=true;
        }
        else{
            found=false;
            break;
        }
    }
   if (found && fh == lh)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

return 0;
}