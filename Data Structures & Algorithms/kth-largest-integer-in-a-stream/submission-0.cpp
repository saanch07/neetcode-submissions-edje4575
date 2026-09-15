class KthLargest {
public:
priority_queue<int,vector<int>,greater<int>>min_q;
int k;
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        for(int i=0;i<nums.size();i++)
        {
            min_q.push(nums[i]);
            if(min_q.size()>k)
            min_q.pop();
        }

        
    }
    
    int add(int val) {
        min_q.push(val);
        if(min_q.size()>k)
        min_q.pop();
        return min_q.top();
        
    }
};
