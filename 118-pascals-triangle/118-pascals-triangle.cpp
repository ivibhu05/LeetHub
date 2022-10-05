class Solution 
{
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> triangle;
    for(int i=0; i<numRows; i++){
        triangle.push_back(vector<int>());
        for(int j=0; j <= i; j++){
            if(j == 0)
              triangle[i].push_back(1);
            else if(j == i)
              triangle[i].push_back(1);
            else{
                triangle[i].push_back(triangle[i-1][j-1] + triangle[i-1][j]);
            }
        }
    }
    return triangle;
    }
};