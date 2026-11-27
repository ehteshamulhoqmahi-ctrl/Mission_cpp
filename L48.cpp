#include<iostream>
#include<vector>
using namespace std;

void rotate_matrix(vector<vector<int>> &arr){
    vector<vector<int>>temp(3,(vector<int>(3,0)));
    int x=2;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            temp[j][x]=arr[i][j];
        }
        x--;
    }
arr=temp;
}

int main(){
    vector<vector<int>>arr(3,(vector<int>(3,0)));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    rotate_matrix(arr);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}