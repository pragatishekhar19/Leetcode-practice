#include<iostream>
#include<vector>
using namespace std;

bool isPerfectMatrix(vector<vector<int>> &matrix) {
    for(int i=0; i< matrix.size()-1; i++) {
        for (int j=0;j<matrix[i].size()-1;j++){
            if(matrix[i+1][j+1]!=matrix[i][j]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    bool ans= isPerfectMatrix(matrix);
    cout<<((ans)? "Yes" : "No")<<endl;
    return 0;
}
