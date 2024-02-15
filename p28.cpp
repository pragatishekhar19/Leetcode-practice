class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for(auto i=nums.begin();i!=nums.end();){
            if(*i==0){
                count++;
                nums.erase(i);
            }
            else{
                i++;
            }
        }
        while(count){
            nums.push_back(0);
            count--;
        }
    }
};
