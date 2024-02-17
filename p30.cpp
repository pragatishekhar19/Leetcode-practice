class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int, vector<int>, greater<int>> ladder_gaps;
        
        for (int i = 1; i < heights.size(); i++) {
            int climb = heights[i] - heights[i - 1];
            if (climb > 0) {
                if (ladders > 0) {
                    ladder_gaps.push(climb);
                    ladders--;
                } else if (!ladder_gaps.empty() && climb > ladder_gaps.top()) {
                    bricks -= ladder_gaps.top();
                    ladder_gaps.pop();
                    ladder_gaps.push(climb);
                } else {
                    bricks -= climb;
                }
                if (bricks < 0) return i - 1;
            }
        }
        return heights.size() - 1;
    }
};
