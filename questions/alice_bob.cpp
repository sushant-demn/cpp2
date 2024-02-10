#include <iostream>
#include <vector>
using namespace std;
int count = 0;
int count2 = 0;
void operation(vector<int> &a, vector<int> &b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > b[i])
        {
            count++;
        };
        if (b[i] > a[i])
        {
            count2++;
        }
    }
};

int main()
{
    int a;
    vector<int> vec1;
    vector<int> vec2;
    vector<int> vec3;
    for (int i = 0; i < 3; i++)
    {
        cin >> a;
        vec1.push_back(a);
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> a;
        vec2.push_back(a);
    }

    operation(vec1, vec2);
    vec3.push_back(count);
    vec3.push_back(count2);
    cout << vec3[0] << " " << vec3[0];

    return 0;
}


/*
array version

#include <iostream>
using namespace std;
int count = 0;
int count2 = 0;
void operation(int a[3], int b[3])
{
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            count++;
        };
        if (b[i] > a[i])
        {
            count2++;
        }
    }
};

int main()
{
    int arra[3];
    int arrb[3];
    int total[2] = {count, count2};

    for (int i = 0; i < 3; i++)
    {
        cin >> arra[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> arrb[i];
    }
    operation(arra, arrb);
    cout << count << " " << count2;

    return 0;
}

*/