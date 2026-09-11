class Solution {
private:
    int numReverse(int num)
    {
        int reverseNum = 0;
        while (num > 0)
        {
            reverseNum = (reverseNum * 10) + (num % 10);
            num /= 10;
        }
        return reverseNum;
    }
public:
    bool isSameAfterReversals(int num) {
        int reverseNum = numReverse(numReverse(num));
        return (num == reverseNum);
    }
};