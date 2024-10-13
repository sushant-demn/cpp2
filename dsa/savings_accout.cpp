# include<iostream>
# include <vector>;

using namespace std;


int main()
{
	int t;
	vector<int> v;
	while(t--)
	{
		int x , y , z , a , b;
		cin>>x>>y>>z;
		b = x;
		a = x*y;
		cout<<"a = "<<a<<"\n\n\n";
		while(a > z){
		cout<<"while started\n";
			a = a - y;
			cout<<"a = "<<a<<"\n";
			b = b - 1;
		}
		v.push_back(x - b);
	}
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}				