#include<iostream>
#include<vector>
using namespace std;

void spiral_order(vector<vector<int>> v){
    
}

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> v(m, vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    spiral_order(v);
}