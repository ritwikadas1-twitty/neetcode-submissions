class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0;
        int left=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++)
            {   if(prices[i-1]<left)
                    left=prices[i-1];
                if((prices[i]-left)>0)
                    profit=prices[i]-left;
                if(profit>max)
                    max=profit;
            }
        return max;
    }
};
