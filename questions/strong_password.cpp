#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() == 1)
        {
            char c = static_cast<char>(static_cast<int>(s[0] + 1));
            s.insert(s.begin() + 1, c);
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == s[i + 1])
                {
                    char c = static_cast<char>(static_cast<int>(s[i]) + 1);
                    s.insert(s.begin() + i + 1, c);
                    break;
                }
            }
        }
        cout << s << "\n";
    }

    return 0;
}