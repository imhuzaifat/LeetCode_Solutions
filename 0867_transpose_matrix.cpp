class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> tMat = {};

        for (int i=0; i<matrix[0].size(); ++i)
        {
            tMat.push_back({});
            for (int j=0; j<matrix.size(); ++j)
            {
                tMat[i].push_back(matrix[j][i]);
            }
        }

        return tMat;
    }
};