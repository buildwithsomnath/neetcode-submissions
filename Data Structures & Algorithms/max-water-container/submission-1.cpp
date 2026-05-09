class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area = 0, left=0, right=heights.size()-1;
        while(left<right){
            int ps = 0;
            if(heights[left]<heights[right]){
                ps=heights[left]*(right-left);
                left++;
            }else{
                ps=heights[right]*(right-left);
                right--;
            }
            area = max(area, ps);
        }
        return area;
    }
};
