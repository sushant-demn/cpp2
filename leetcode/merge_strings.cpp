#include <bits/stdc++.h>
#include <string>
using namespace std;

string mergeAlternately(string word1, string word2)
{
    string sol = "";
    int i = 0;
    while ((i < word1.length()) or (i < word2.length()))
    {
        if (i < word1.length())
        {
            sol += word1[i];
        }
        if (i < word2.length())
        {
            sol += word2[i];
        }
        i++;
    }
    return sol;
}

int main()
{
    cout << mergeAlternately("abc", "pqr");
    return 0;
}