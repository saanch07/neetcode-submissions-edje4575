class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int n:nums)
        {
            int ind=abs(n)-1;
            if(nums[ind]<0)
            return abs(n);
            else
            nums[ind]*=(-1);
        }
        return -1;

        
    }
};
