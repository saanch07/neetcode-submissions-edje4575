class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>leftmax(n);
        vector<int>rightmax(n);

        leftmax[0]=height[0];
        rightmax[n-1]=height[n-1];

        int lmax=height[0];
        int rmax=height[n-1];
        for(int i=1;i<n;i++)
        {
            leftmax[i]=max(height[i],lmax);
            lmax=max(height[i],lmax);
        }
        for(int i=n-2;i>=0;i--)
        {
            rightmax[i]=max(height[i],rmax);
            rmax=max(height[i],rmax);
        }
        int res=0;
        for(int i=0;i<n;i++)
        {
            res+=max(0,min(leftmax[i],rightmax[i])-height[i]);
        }
        return res;

        
    }
};
