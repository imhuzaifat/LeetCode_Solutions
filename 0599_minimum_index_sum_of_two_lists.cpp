class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> ans;
        vector<pair<int,int>> matchIndices;
        for (int i=0; i<list1.size(); ++i)
        {
            for (int j=0; j<list2.size(); ++j)
            {
                if (list1[i] == list2[j])
                    matchIndices.push_back({i+j,i});
            }
        }
        sort(matchIndices.begin(), matchIndices.end());
        int firstSum = matchIndices[0].first;
        for (int i=0; i<matchIndices.size() && firstSum == matchIndices[i].first; ++i)
        {
            ans.push_back(list1[matchIndices[i].second]);
        }
        return ans;
    }
};