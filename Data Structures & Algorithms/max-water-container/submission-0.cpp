class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int maxA=0;

        while(left<right)
        {
            int curr_h=min(heights[left],heights[right]);
            int curr_w=right-left;
            maxA=max(maxA,curr_h*curr_w);

            if(heights[left]<heights[right])
            left++;
            else
            right--;

        }
        return maxA;
        
    }
};
