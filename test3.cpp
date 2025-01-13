#include <bits/stdc++.h>
using namespace std;
int findvalue(char c)
{
    char chr[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int value[7] = {1, 5, 10, 50, 100, 500, 1000};
    for (int i = 0; i < 7; i++)
    {
        if (c == chr[i])
        {
            return value[i];
        }
    }
}
int romanToInt(string s)
{

    int j = 0;
    int val = 0;
    while (j < s.length())
    {
        if ((j + 1) < s.length() && findvalue(s[j + 1]) > findvalue(s[j]))
        {
            val = val - findvalue(s[j]);
        }
        else
        {
            val = val + findvalue(s[j]);
        }
        j++;
    }
    return val;
}
int main()
{
    string str = "MCMXCIV";
    cout << romanToInt(str);
    return 0;
}