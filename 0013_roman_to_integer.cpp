class Solution {
public:
    int romanToInt(string s) {
    int finalNum = 0, romanLength = s.length();

    for (int i = 0; i < romanLength; i++)
    {
        if (i < romanLength - 1)
        {
            if (s[i] == 'I' && s[i + 1] != 'V' && s[i + 1] != 'X')
                finalNum += 1;
            else if (s[i] == 'I' && s[i + 1] == 'V')
            {
                finalNum += 4;
                i++;
            }
            else if (s[i] == 'I' && s[i + 1] == 'X')
            {
                finalNum += 9;
                i++;
            }
            else if (s[i] == 'V')
                finalNum += 5;
            else if (s[i] == 'X' && s[i + 1] != 'L' && s[i + 1] != 'C')
                finalNum += 10;
            else if (s[i] == 'X' && s[i + 1] == 'L')
            {
                finalNum += 40;
                i++;
            }
            else if (s[i] == 'X' && s[i + 1] == 'C')
            {
                finalNum += 90;
                i++;
            }
            else if (s[i] == 'L')
                finalNum += 50;
            else if (s[i] == 'C' && s[i + 1] != 'D' && s[i + 1] != 'M')
                finalNum += 100;
            else if (s[i] == 'C' && s[i + 1] == 'D')
            {
                finalNum += 400;
                i++;
            }
            else if (s[i] == 'C' && s[i + 1] == 'M')
            {
                finalNum += 900;
                i++;
            }
            else if (s[i] == 'D')
                finalNum += 500;
            else if (s[i] == 'M')
                finalNum += 1000;
        }
        else
        {
            switch (s[i]) {
            case 'I':
                finalNum += 1;
                break;
            case 'V':
                finalNum += 5;
                break;
            case 'X':
                finalNum += 10;
                break;
            case 'L':
                finalNum += 50;
                break;
            case 'C':
                finalNum += 100;
                break;
            case 'D':
                finalNum += 500;
                break;
            case 'M':
                finalNum += 1000;
                break;
            }
        }
    }
        return finalNum;
    }
};