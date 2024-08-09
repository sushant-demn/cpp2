
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	vector<string> vec;
	while (t--)
	{
		cout << "\nWhile ini\n";
		int n, s, m;
		bool flag = false;
		cout << "\n nsm\n";
		cin >> n >> s >> m;
		int arr[(n * 2) + 1];
		arr[0] = 0;
		for (int i = 1; i < (n * 2) + 1; ++i)
		{
			cout << "\nArrayin\n";
			cin >> arr[i];
		}
		for (int i = 0; i < (n * 2) + 1; NULL)
		{
			if (arr[i + 1] - arr[i] >= s)

			{
				cout << arr[i] << " " << arr[i + 1] << "\n";
				cout << "\nIF condition\n";
				flag = true;

				break;
			}
			else
			{
				{
					cout << "\nelse condition\n";
					i = i + 2;
				}
			}
			if (flag == true)
			{
				cout << "YES\n";
				// vec.push_back("YES");
			}
			if (flag == false)
			{
				// vec.push_back("NO");
				cout << "NO\n";
			}
		}
		return 0;
	}
}