#include <iostream>

using namespace std;

int main() {
	int a , b, c, x;
	cin>>a>>b>>c>>x;
	
	if((a*b*c) > (x*x*x))
	{
	    cout<<"Cuboid";
	}
	else if((a*b*c) < (x*x*x))
	{
	    cout<<"Cube";
	}
	else
	{
	    cout<<"Equal";
	}

}
