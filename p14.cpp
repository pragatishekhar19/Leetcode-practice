class Solution {
public:
    void reverseString(vector<char>& s) {
        auto i=s.begin();
        auto j=s.end()-1; //last char is null!
        while(j>i){
            swap(*i,*j);
            i++;j--;
        }
    }
};
