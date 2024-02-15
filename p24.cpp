class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long int largest=nums[nums.size()-1];
        long long int sum=0;
        for(int i=0;i<nums.size()-1;i++){
            sum+=nums[i];
        }
        for(int i=nums.size()-1;i>=2;i--){  
            if(sum>largest){
                return sum+largest;
            }
            largest=nums[i-1];
            sum-=nums[i-1];
        }
        return -1;
    }
};
