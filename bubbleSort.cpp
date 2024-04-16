#include<iostream>
#include<vector>

using namespace std;

void bubbleSort(vector<int> &v){
    
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }


}

int main(){
    vector<int> array;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        array.push_back(num);
    }
    bubbleSort(array);
    for(int i=0;i<n;i++){
        cout<<array[i]<<"\t";
    }


    return 0;
}
