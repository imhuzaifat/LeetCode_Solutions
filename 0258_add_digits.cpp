class Solution {
public:
    int addD(int num)
    {
        int ans = 0;
        while(num)
        {
            ans += num % 10;
            num /= 10;
        }
        return ans;
    }
    int addDigits(int num) {
        while (num >= 10)
            num = addD(num);
        return num;
    }
};