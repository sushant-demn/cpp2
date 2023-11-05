#include <iostream>
using namespace std;
class one;
class two
{
public:
  void print(one);
};
class one
{
private:
  string a;
  friend class two;
  public:
  void take(void){
cin>>a;
  };
};
void two :: print(one o1){
  cout<<o1.a<<" phuck u \n";
}
int main()
{
one zero;
zero.take();
two nigga;
nigga.print(zero);
  return 0;
}