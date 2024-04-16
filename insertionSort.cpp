#include<iostream>
#include<vector>

using namespace std;

void insertionSort(vector<int> &v){
    int n=v.size();
    for(int i=1;i<n;i++){
        int curr= v[i];
        int j=i-1;
        while(v[j]>curr && j>=0) {
            v[j+1]=v[j];
            j--;
        }
        v[j]=curr;
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
    insertionSort(array);
    for(int i=0;i<n;i++){
        cout<<array[i]<<"\t";
    }


    return 0;
}
