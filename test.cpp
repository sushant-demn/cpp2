#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int some[100];
class students
{
  int a;
  int scores[100];
  static int count;
  int b;

public:
  void chk();
  void nos(void)
  {
    cin >> a;
  }
  void getmrk(void);
};

int students::count;
void students::getmrk(void)
{
  for (int i = 0; i < a; i++)
  {

    for (int i = 0; i < 5; i++)
    {
      int a;
      cin >> a;
      b = b + a;
    }
    scores[i] = b;
  }
}
void students ::chk(void)
{
  for (int i = 0; i < a; i++)
  { int c = i +1;
    if (scores[0]<scores[c]){
      count++;
    };
    
  }
  cout<<count;
}
int main()
{

  students kristain;
  kristain.nos();
  kristain.getmrk();
  kristain.chk();
  return 0;
}
