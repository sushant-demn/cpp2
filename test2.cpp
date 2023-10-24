#include <iostream>
using namespace std;

class marks
{
private:
    int a;
    int scoresum[100];
    static int count;

public:
    void getnos(void)
    {
        cin >> a;
    }
    void getscores(void);
    void chkscores(void);
};
int marks::count;
void marks ::getscores(void)
{
    for (int i = 0; i < a; i++)
    {
        int y = 0;
        for (int i = 0; i < 5; i++)
        {
            int x;
            cin >> x;
            y = y + x;
        }
        scoresum[i] = y;
    }
}
void marks ::chkscores(void)
{
    for (int i = 0; i < a; i++)
    {
        if(scoresum[0]<scoresum[i]){
            count++;
        }
    }
   cout<<count; 
}
int main()
{
    marks student;
    student.getnos();
    student.getscores();
    student.chkscores();
    return 0;
}