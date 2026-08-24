class Solution {
public:
    bool judgeCircle(string moves) {
        pair<int,int> pos = {0,0};
        for (int i=0; i<moves.size(); ++i)
        {
            if (moves[i] == 'U')
                ++pos.second;
            else if (moves[i] == 'D')
                --pos.second;
            else if (moves[i] == 'R')
                ++pos.first;
            else if (moves[i] == 'L')
                --pos.first;
        }
        if (pos.first == 0 && pos.second == 0)
            return true;
        return false;
    }
};