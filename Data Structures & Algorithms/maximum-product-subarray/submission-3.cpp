class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_p=nums[0];
        int n=nums.size();
        if(n==1)
        return max_p;

        int p=nums[0];
        for(int i=0;i<n;i++)
        {
            p=nums[i];
            max_p=max(p,max_p);
            for(int j=i+1;j<n;j++)
            {
                p*=nums[j];
                max_p=max(p,max_p);
            }
        }
        return max_p;
        
    }
};
