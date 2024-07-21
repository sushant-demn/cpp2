#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int x = a;
    a = b;
    b = x;
}
int partition(int arr[], int lb, int ub)
{
    int pivot = arr[lb], start = lb, end = ub;

    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(arr[start], arr[end]);
        }
    }
    swap(arr[lb], arr[end]);
    return end;
}
void quicksort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition(arr, lb, ub);
        quicksort(arr, lb, (loc - 1));
        quicksort(arr, (loc + 1), ub);
    }
}
int main()
{
    cout << "Enter the number of element: ";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    quicksort(arr, 0, n - 1);
    cout << "\n sorted: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}