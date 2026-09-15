class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        if(stones.size()==1)
        return stones[0];
        for(int i:stones)
        {
            pq.push(i);
        }
        while(pq.size()>=2)
        {
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            int z=abs(x-y);
            pq.push(z);

        }
        return pq.top();
        
    }
};
