#include<iostream>
#include<vector>

using namespace std;

void selectionSort(vector<int> &v){
    int n=v.size();
    for (int i = 0; i<n;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(v[j] < v[min_index]){
                min_index=j;
            }
        }
        swap(v[i],v[min_index]);
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
    selectionSort(array);
    for(int i=0;i<n;i++){
        cout<<array[i]<<"\t";
    }


    return 0;
}
