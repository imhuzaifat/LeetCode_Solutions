class Solution {
public:
    bool isUgly(int n) {
        vector<int> primeFactors = {2, 3, 5};
        int i=0;
        if (n==0)   return false;
        while (n!=1)
        {
            if (n % primeFactors[i] == 0)
                n /= primeFactors[i];
            else
                ++i;
            
            if (i==3)
                return false;
        }
        return true;
    }
};