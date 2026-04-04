class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int max_s=0;
        if(nums.empty())
        return 0;
        sort(nums.begin(),nums.end());
        int curr=nums[0];
        int seq=0;
        int i=0;
        while(i<nums.size())
        {
            if(nums[i]!=curr)
            {
                curr=nums[i];
                seq=0;
            }
            while(i<nums.size()&& nums[i]==curr)
            {
                i++;
            }
            seq++;
            curr++;
            max_s=max(seq,max_s);
        }
        return max_s;
        
    }
};
