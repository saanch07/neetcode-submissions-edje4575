class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>product(n);
        int n_zeroes=0;
        int p=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            p*=nums[i];
            else
            n_zeroes++;
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                if(n_zeroes==1)
                product[i]=p;
                else
                product[i]=0;

            }
            else if(n_zeroes>0)
            product[i]=0;
            else
            product[i]=p/nums[i];
        }
        return product;

    }
};
