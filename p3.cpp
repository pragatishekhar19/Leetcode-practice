// Given an array of integers nums, return the number of good pairs. A pair (i, j) is called good if nums[i] == nums[j] and i < j.
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        for (int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
        }
        return count; 
    }
};
