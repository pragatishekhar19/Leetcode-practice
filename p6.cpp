//Given n points on a 2D plane where points[i] = [xi, yi], Return the widest vertical area between two points such that no points are inside the area.

//A vertical area is an area of fixed-width extending infinitely along the y-axis (i.e., infinite height). The widest vertical area is the one with the maximum width.

//Note that points on the edge of a vertical area are not considered included in the area.
class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> area;
        sort(points.begin(), points.end());
        for (int i=0; i<points.size()-1; i++){
            area.push_back((points[i+1][0]-points[i][0]));
        }
        int max=area[0];
        for(int j=0;j<area.size();j++){
            if(max<area[j]){
                max=area[j];
            }
        }
        return max;
    } 

};
