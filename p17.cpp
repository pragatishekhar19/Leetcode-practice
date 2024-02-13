class Solution {
public:

    int missingNumber(vector<int>& nums) {
        int sum=0;
        int sum1= (nums.size())*(nums.size()+1)/2;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return sum1-sum;
    }
};
