class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int top=0;
        int bot=m-1;
        while(top<=bot)
        {
            int row=(top+bot)/2;
            if(target>matrix[row][n-1])
            top++;
            else if(target<matrix[row][0])
            bot--;
            else
            break;
        }
        if(!(top<=bot))
        return false;

        int row=(top+bot)/2;
        int l=0,h=n-1;
        while(l<=h)
        {
            int m=l+(h-l)/2;
            if(matrix[row][m]>target)
            h=m-1;
            else if(matrix[row][m]<target)
            l=m+1;
            else
            return true;
        }
        return false;
        
    }
};
