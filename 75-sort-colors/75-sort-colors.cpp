class Solution {
public:
    void sortColors(vector<int>& v) {
        int zeros=count(v.begin(),v.end(),0);
        int ones=count(v.begin(),v.end(),1);
        int twos=count(v.begin(),v.end(),2);
        v.clear();  
        for(int i=0;i<zeros;i++)
        {
            v.push_back(0);
        }
        
        for(int i=0;i<ones;i++)
        {
            v.push_back(1);
        }
        
        for(int i=0;i<twos;i++)
        {
            v.push_back(2);
        }
    }
};