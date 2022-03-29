class Solution {
public:
    int titleToNumber(string s) 
    {
        int ans=0,cnt=0;
        int n=s.length();
        for(int i=n-1;i>=0;i--)
        {
            int temp=pow(26,cnt);
            ans+=temp*(s[i]-'A'+1);
            cnt++;
        }
        return ans;
    }
};