#include<iostream>
#include<vector>
using namespace std;

int piv_inx(vector<int> &arr,int st,int end){
    int i=st-1,pivot=arr[end];
    for(int j=st;j<end;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[end]);
    return i;
}

void Quick_sort(vector<int> &arr,int st,int end){
    if(st<end){
    int indx= piv_inx(arr,st,end);

    Quick_sort(arr,st,indx-1);//left half
    Quick_sort(arr,indx+1,end);//right half
    }
}

int main(){
    vector<int>arr={4,5,3,7,2,9,1,6,8,3,3};

    Quick_sort(arr,0,arr.size()-1);

    for(int value:arr){
        cout<<value<<" ";
    }
    cout<<endl;
   
return 0;
}