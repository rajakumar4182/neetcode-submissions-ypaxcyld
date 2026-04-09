class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i =0,j=1;
        int ans = 0;
        while(j<prices.size()){
            if(prices[i] < prices[j]){
                ans = max(ans, prices[j] - prices[i]);
            }
            else{
                i = j;

            }
            j++;
            // ans = max(ans, prices[j] - prices[i]);
            // i++;
            // j--;
        }
        return ans;
    }
};
