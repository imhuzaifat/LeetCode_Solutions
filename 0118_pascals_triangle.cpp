class Solution {
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> pascalTri;

        for(int i=0; i<numRows; ++i)
        {
            pascalTri.push_back({1});
            for(int j=1; j<i; ++j)
            {
                pascalTri[i].push_back(pascalTri[i-1][j-1] + pascalTri[i-1][j]);
            }
            if (i>0)
                pascalTri[i].push_back(1);
        }

        return pascalTri;
    }
};