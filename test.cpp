#include <iostream>
using namespace std;
int arr[5];
void fun2(void)
{
  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
  };
};
void func2(void)
{
}
void fucn(void)
{
  int a = arr[0];

  for (int i = 0; i < 5; i++)
  {
    if (arr[i] < arr[i + 1])
    {
      a = arr[i + 1];
    }
  }
  cout << a << "\n";
};
int main()
{
  fun2();

  fucn();
  return 0;
}