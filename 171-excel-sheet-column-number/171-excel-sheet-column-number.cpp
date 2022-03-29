class Solution {
public:
    int titleToNumber(string s) 
    {
        int ans=0,cnt=0;
        int n=s.length();
        for(int i=n-1;i>=0;i--)
        {
            // int temp=;
            ans+=pow(26,cnt)*(s[i]-'A'+1);
            cnt++;
        }
        return ans;
    }
};