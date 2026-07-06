class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum=0,max_s=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(curr_sum<0)
            curr_sum=0;

            curr_sum+=nums[i];
            max_s=max(max_s,curr_sum);
        }
        return max_s;

    }
};
