class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(),stones.end());
        
        priority_queue<int> pq;
        
        for(auto it:stones){
            pq.push(it);
        }
        
        while(pq.size() >1){
            int t = pq.top();
            pq.pop();
            int t2 = pq.top();
            pq.pop();
            
            if(t != t2){
                pq.push(t-t2);
            }
        }
        
        if(pq.size() == 1){
            return pq.top();
        }
        
        return 0;
        
        
    }
};