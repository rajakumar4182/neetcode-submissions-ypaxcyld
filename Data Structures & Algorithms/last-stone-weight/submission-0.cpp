class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto num:stones){
            pq.push(num);
        }

        while(pq.size()>1){
            // if(pq.size()==1) ans = pq.top();

            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();

            if(x == y) continue;
            
            if(x>y){
                x= x-y;
                pq.push(x);
            }

        }
        return pq.empty()? 0: pq.top();
    }
};
