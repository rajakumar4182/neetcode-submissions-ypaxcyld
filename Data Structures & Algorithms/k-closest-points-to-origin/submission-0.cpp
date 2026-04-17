class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> v;
        priority_queue<pair<int,vector<int>>>pq;

        for(int i=0;i<points.size();i++){
            // for(int j=0;j<=points[0].size();j++){
                int dist = ((points[i][0] * points[i][0]) + (points[i][1] *points[i][1]) );
                pq.push({dist, points[i]});

                if(pq.size() >k ){
                    pq.pop();
                }
            // }
        }
        while(!pq.empty()){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};
