class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
       int ans=-1;
        int prefixSum=0,sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(prefixSum==(sum-nums[i]-prefixSum))
               {
                   ans=i;
                   break;
               }
               prefixSum+=nums[i];
        }
               return ans;
    }
};