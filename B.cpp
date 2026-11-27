#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int>& arr){
    int n=arr.size();
    bool swapped=false;
    for(int i=0;i<n;i++){
        swapped=false;
        for(int j=0;j<n-i;j++){
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
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr);
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}