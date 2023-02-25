class Solution {
    public static int maxProfit(int prices[]) 
    {
       // int buyPrice = Integer.MAX_VALUE;
        int buyPrice=prices[0];
        int maxProfit=0;
        for (int i=1; i<prices.length; i++)
        {
            if (buyPrice < prices[i])
            {
                int profit= prices[i]-buyPrice;
                maxProfit=Math.max(profit,maxProfit);
            }
            else
                buyPrice=prices[i];
                
         }
        return maxProfit;
     }
   
}