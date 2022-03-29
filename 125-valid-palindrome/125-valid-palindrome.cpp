class Solution {
public:
    bool isPalindrome(string s) 
    {
         transform(s.begin(), s.end(), s.begin(), ::tolower);
        string ans="";
        int n=s.length();
        if(n==0 || n==1)
        {
            return true;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(iswalnum(s[i]))
                {
                ans+=s[i];
                }
                else
                {
                    continue;
                }
            }
        }
        string x=ans;
        reverse(x.begin(),x.end());
        if(x==ans)
        {
            return true;
        }
        else
            
        {
            return false;
        }
    }
};