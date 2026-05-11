class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MaxStock = 0;
        int curr = 0;
        for(int i=1;i<prices.size();i++){
            int n = prices[i]-prices[curr];
            if(n>0){
                MaxStock = max(MaxStock,n);
            }else{
                curr=i;
            }
        }
        return MaxStock;
    }
};
