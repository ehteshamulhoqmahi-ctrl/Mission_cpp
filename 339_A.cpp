#include<iostream>
#include<string>
#include<vector>
using namespace std;

void sort(vector<int>& arr, int st, int end) {
    int min_idx;
    for(int i=0;i<end;i++){
        min_idx=i;
        for(int j=i+1;j<end;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
    
}

int main(){
    string a;
    cin>>a;
    vector<int> arr;
    for(int i=0;i<a.length();i+=2){
        arr.push_back(a[i]-'0');
    }
    sort(arr,0,arr.size());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
        if(i<arr.size()-1)
            cout<<"+";
    }
    cout<<endl;
}