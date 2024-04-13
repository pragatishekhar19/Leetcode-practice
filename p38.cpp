#include<iostream>
#include<vector>
#include<string>

using namespace std;

void possibleletters(string s, int i, string result, vector<string> &li,vector<string> &output){
    if(i==s.length()){
        output.push_back(result);
        return ;
    }
    int digit=s[i]-'0';
    if(digit<=1){
        possibleletters(s,i+1,result,li,output);
        return;
    }
    for(int j=0;j<li[digit].size();j++){
        possibleletters(s,i+1,result+li[digit][j],li,output);
    }
}
int main(){
    vector<string> li={"","","abc","efg","hij","klm","nop","pqrs","tuv","wxyz"};
    string str;
    cin>>str;
    vector<string> output;
    possibleletters(str, 0,"",li,output);
    for(int i=0;i<output.size();i++){
        cout<<output[i]<<"\t";
    }
    return 0;
}
