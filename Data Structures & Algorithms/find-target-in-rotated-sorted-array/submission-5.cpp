class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivot=0;
        int l=0;
        int n=nums.size();
        int r=nums.size()-1;
        while(l<r)
        {
            int m=l+(r-l)/2;
            if(nums[m]>nums[r])
            l=m+1;
            else
            r=m;
        }
        pivot=l;
        l=0,r=n-1;
       
         if(nums[pivot]<=target && target<=nums[r])
        l=pivot;
        else
        r=pivot-1;

        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(nums[m]==target)
            return m;
            else if(nums[m]<target)
            l=m+1;
            else
            r=m-1;
        }
        return -1;

        
    }
};
