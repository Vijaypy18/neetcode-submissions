class Solution {
public:
    int maxArea(vector<int>& heights) {
        int s=0;
        int e=heights.size()-1;
        int area=0;
        while(s<e)
        {
            int validHeight=min(heights[s],heights[e]);
             int area1=validHeight*(e-s);
             area=max(area,area1);
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
