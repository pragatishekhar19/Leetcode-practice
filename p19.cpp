class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        int n = nums.size();
        for(int i = 0; i < n; i++) { // Start from 0, not from n-1
            int val = nums[i];
            if(val > 0) {
                pos.push_back(val);
            }
            else {
                neg.push_back(val);
            }
        }
        nums.clear();
        for(int i = 0; i < min(pos.size(), neg.size()); i++) { // Iterate up to the minimum size of pos and neg
            nums.push_back(pos[i]);
            nums.push_back(neg[i]);
        }
        
        // If one vector still has remaining elements, add them to nums
        for(int i = min(pos.size(), neg.size()); i < pos.size(); i++) {
            nums.push_back(pos[i]);
        }
        for(int i = min(pos.size(), neg.size()); i < neg.size(); i++) {
            nums.push_back(neg[i]);
        }

        return nums;
    }
};
