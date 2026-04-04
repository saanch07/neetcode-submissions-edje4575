class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        int max_s=0;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            int next=nums[i]+1;
            int seq=1;
            while(s.find(next)!=s.end())
            {
                seq++;
                next+=1;
            }
            max_s=max(max_s,seq);
        }
        return max_s;
    }
};
