class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return nums[0];

        
        int max_s=nums[0];
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=nums[j];
                max_s=max(max_s,sum);
            }
        }
        return max_s;

    }
};
