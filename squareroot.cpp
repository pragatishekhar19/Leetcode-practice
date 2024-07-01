#include<iostream>
using namespace std;

int sqrtt(int x){
    int low=1, high=x;
    int ans=-1;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(mid*mid<=x){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
int main(){
    int x;
    cout<<"enter the numver whose square root needs to be calculated: ";
    cin>>x;
    int sq=sqrtt(x);
    cout<<"The floor of squareroot of x is: "<<sq<<endl;
    return 0;
}
