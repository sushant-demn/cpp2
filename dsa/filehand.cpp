#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{

    // ofstream outf("test.txt", ios::app);

    // for (int i = 0; i < 5; i++)
    // {
    //     outf << "Hello \n";
    // }
    // outf.close();
    ifstream fin("test.txt");
    string line;
    while (fin)
    {
        getline(fin, line);
        cout << line<<"\n";
    }
    // ifstream.close();
    return 0;
}