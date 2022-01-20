class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int n=s.size(),cnt=0;
        for(int i=n-1;i>=0;i--)
        {
           if(s[i]==' ')
           {
               cnt=0;
           }
            else
            {
                cnt++;
                if(i>0 && s[i]!=' ' && s[i-1]==' ')
                {
                    return cnt;
                }
                                // return count;
                else if(i==0)
                return cnt;

                // return cnt;
            }
        }
    return 1;
    }
};