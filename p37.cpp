class Solution {
public:
    int longestIdealString(string s, int k) {
        int n= s.length();
        int count=0;
        for(int i=0;i<n-1;i++){
            if(abs(s[i]-s[i+1])<=k){
                count++;
            }
        }
        return count+1;
    }
};
