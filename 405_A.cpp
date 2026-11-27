#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int>& arr,int st,int end){
    bool swapped=false;
    for(int i=0;i<end-1;i++){
        swapped=false;
        for(int j=0;j<end-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(!swapped){
            break;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}