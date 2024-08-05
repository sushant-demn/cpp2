#include <bits/stdc++.h>
using namespace std;

int search(char arr[], int n){
	char alpha[4] = {'A' , 'B' , 'C' , 'D'};
	 int a = 0;
	 for(int i = 0; i < 4 ; i++){
	 	for(int j = 0; j < n; j++){
			for(int k = 0; k < n*4; k++){
				if(arr[k] == alpha[i]){
					arr[k] = '?';
					a++;
					break;
				}
			} 	
	 	}
	 }
	 return a;
}
int main(){
int t;
cin>>t;
vector<int> vec;
while(t--)
{
	int n;
	cin>>n;
	char arr[n*4];
	for(int i = 0 ; i < n*4; i++){
		cin>>arr[i];
	}
	
	vec.push_back(search(arr , n));
}
for (int i = 0; i < vec.size(); ++i)
{
	cout<<vec[i]<<"\n";
}
return 0;
}
