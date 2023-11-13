#include <iostream>
using namespace std;
class people
{
private:
    string name;
    string id;
    string arr[];

public:
    void datain(void)
    {

        cout << "Type the name of the citizen\n";
        cin >> name;

        cout << "Type the id of the citizen\n";
        cin >> id;
    };
    void dataout(int a)
    {
        cin >> a;
    }
};
int main()
{
    people arr[100];
    int a;
    cout << "For how many citizen you want to feed data\n";
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        cout << "type the id of the citizen\n";
        int c;
        cin >> c;
        arr[c].datain();
    }

    return 0;
}