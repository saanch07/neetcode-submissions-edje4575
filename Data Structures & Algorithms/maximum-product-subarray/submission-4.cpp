class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_p=INT_MIN;
        int prefix=1;
        int suffix=1;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(prefix==0)
            prefix=1;
            if(suffix==0)
            suffix=1;
            prefix*=nums[i];
            suffix*=nums[n-i-1];
            max_p=max({prefix,suffix,max_p});
        }
        return max_p;
        
    }
};
