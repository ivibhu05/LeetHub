class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> dp(rowIndex+1);
        dp[0].push_back(1);
        for(int i=1;i<rowIndex+1;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(i==j||j==0)
                {
                    dp[i].push_back(1);
                }
                else
                {
                    dp[i].push_back(dp[i-1][j-1]+dp[i-1][j]);
                }
            }
        }
        return dp[rowIndex]; 
    }
};