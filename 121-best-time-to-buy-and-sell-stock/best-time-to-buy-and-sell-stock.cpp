class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx=0;
        mx=prices[0];
        int result=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>mx){
                result=max(prices[i]-mx,result);
            }
            if(prices[i]<mx){
                mx=prices[i];
            }
        }
        return result;
    }
};