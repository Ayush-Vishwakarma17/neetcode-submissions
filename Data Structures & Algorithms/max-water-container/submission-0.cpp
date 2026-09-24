class Solution {
public:
    int maxArea(vector<int>& heights) {
       int i = 0, j = heights.size()-1;
        int result = 0;
        while (j > i) {
            int h = min(heights[i], heights[j]);
            result = max(result, h*(j-i));
            if (heights[i] < heights[j]) {
                i++;
            } else {
                j--;
            }
        }
        return result;
    }
};
