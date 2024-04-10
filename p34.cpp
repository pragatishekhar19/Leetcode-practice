#include<iostream>
#include<vector>
using namespace std;

void spiralorder(vector<vector<int>>& matrix) {
    int left=0;
    int right=matrix[0].size()-1;
    int top=0;
    int bottom=matrix.size()-1;
    
    int direction=0;
    while (left<=right && top<=bottom){
        if(direction==0){
            for(int col=left;col<=right;col++){
                cout<<matrix[top][col]<<" ";
            }
            top++;
        }
        else if(direction==1){
            for(int row=top;row<=bottom;row++){
                cout<<matrix[row][right]<<" ";
            }
            right--;
        }
        else if(direction==2){
            for(int col=right;col>=left;col--){
                cout<<matrix[bottom][col]<<" ";
            }
            bottom--;
        }
        else{
            for(int col=bottom;col>=top;col--){
                cout<<matrix[col][left]<<" ";
            }
            left++;
        }
        direction=(direction+1)%4;
        }
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    spiralorder(v);
    return 0;
}
