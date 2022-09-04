class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp1;
        unordered_map<char,char> mp2;
        for(int i=0;i<s.size();i++)
        {
            char c1=s[i];
            char c2=t[i];
            if(mp1[c1])
            {
                if(mp1[c1]!=c2) return false;
            }
            else if(mp2[c2])
            {
                if(mp2[c2]!=c1) return false;
            }
            else
            {
                mp1[c1]=c2;
                mp2[c2]=c1;
            }
        }
        return true;
    }
};