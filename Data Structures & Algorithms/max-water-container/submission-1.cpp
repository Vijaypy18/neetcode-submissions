class Solution {
public:
    int maxArea(vector<int>& heights) {
        int s=0;
        int e=heights.size()-1;
        int area=0;
        while(s<e)
        {
            int h = min(heights[s],heights[e]);
            int tempArea = h*(e-s);
            area = max(area,tempArea);
            if(heights[s]<heights[e])
            {
                s++;

            }
            else{
                e--;
            }
        }
        return area;
    }
};
