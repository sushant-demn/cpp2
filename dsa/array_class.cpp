#include<iostream>

using namespace std;

class Array{
private: 
	int arr[100];
	int b[100];
	
public:
	int  n ;
	void get()
	{	
		cout<<"Enter the number of elements you want to add: ";
		cin>>n;
		cout<<"Enter the elements of the array: ";
		for(int i = 0 ; i < n ; i++)
		{
			cin>>arr[i];
		}
	}
	void display()
	{
		cout<<"The elements in the arrays are: ";
		for (int i = 0 ; i < n ; i++)
		{
			cout<<arr[i]<<" ";
		}
	}
	void selection()
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (arr[i] > arr[j])
				{
					int x = arr[i];
					arr[i] = arr[j];
					arr[j] = x;
				}
				
			}
			
		}
		
	}
	void merge(int lb, int mid, int ub)
	{	
		int i = lb , k = lb  , j = mid + 1;
		while (i <= mid and j<= ub)
		{
			if (arr[i] <= arr[j])
			{
				b[k] = arr[i];
				i++;
			}
			else{
				b[k] = arr[j];
				j++;
			}
			k++;
		}
			if (i > mid)
			{
				while (j <= ub)
				{
					b[k] = arr[j];
					j++;
					k++;
				}
				
			}
			else{
				while (i <= mid)
				{
					b[k] = arr[i];
					i++;
					k++;
				}
				
			}
				
		}
	void mergesort(int lb, int ub)
	{	int mid;
	cout<<"lb "<<lb<<" ub "<<ub;
		if (lb < ub)
		{
			mid = (lb + ub)/2;
			mergesort(lb , mid);
			mergesort(mid + 1 ,ub);
			merge(lb , mid , ub);
		}
		
	}
void display_merge()
{	cout<<"\n77The sorted elements after merge sort: ";

	for(int i = 0; i < n; i++)
	{
		cout<<b[i]<<" ";
	} 
}

};

int main()
{
	Array a;
	a.get();
	a.display();
	// a.selection();
	// cout<<"\n Date after sorting: \n";
	// a.display();
	a.mergesort(0 ,a.n - 1);
	a.display_merge();
return 0;
}
