class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int n = releaseTimes.size();
        int slowest = 0, slowestTime = releaseTimes[0];
        for (int i=1; i<n; ++i)
        {
            int duration = releaseTimes[i] - releaseTimes[i-1];
            if (duration > slowestTime)
            {
                slowestTime = duration;
                slowest = i;
            }
            else if (duration == slowestTime)
            {
                if (keysPressed[slowest] < keysPressed[i])
                {
                    slowestTime = duration;
                    slowest = i;
                }
            }
        }
        return keysPressed[slowest];
    }
};