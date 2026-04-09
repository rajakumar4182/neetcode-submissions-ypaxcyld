class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res = INT_MIN;
        int i=0,j = heights.size()-1;

        while(i<j){
            res = max(((j-i) * min(heights[i],heights[j])) , res);
            if(heights[i] < heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return res;
    }
};
