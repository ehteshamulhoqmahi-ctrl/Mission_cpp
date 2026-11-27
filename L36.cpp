#include<iostream>
#include<vector>
using namespace std;

bool isvalid(vector<vector<char>> &sudoku){
    bool row[9][9]={false};
    bool column[9][9]={false};
    bool box[9][9]={false};

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(sudoku[i][j]=='.'){
                continue;
            }
            int value=sudoku[i][j]-'1';
            int box_idx=(i/3)*3 + (j/3);

            if(row[i][value] || column[j][value] || box[box_idx][value]){
                return false;
            }

            row[i][value]=true;
            column[j][value]=true;
            box[box_idx][value]=true;
        }
    }
    return true;
}

int main(){
   vector<vector<char>>sudoku(9,vector<char>(9,'.'));
   for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
        cin>>sudoku[i][j];
    }
   }
   if(isvalid(sudoku)){
    cout<<"true"<<endl;
   }
   else{
    cout<<"false"<<endl;
   }
return 0;
}