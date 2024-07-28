#include <iostream>
using namespace std;
void log(const std::string &message)
{
    cout << "[LOG]: " << message << std::endl;
}
void readMatrix(int matrix[][n], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        std::string line;
        std::cin >> line;
        for (int j = 0; j < cols; ++j)
        {
            matrix[i][j] = line[j] - '0'; // Convert char '0' or '1' to int 0 or 1
        }
    }
}
int main()
{
    int t;
    int n, k;
    cin >> t;
    while (t--)
    {
        log("Taking n and k");
        cin >> n >> k;
        int arr[n][n];
        int arr2[n / k][n / k];
        log("Taking array input");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        int s = 0, r = 0;
        int l = 0, m = 0;
        log("Running while");
        while (s < n)
        {
            for (int i = s; i < s + k; i++)
            {
                for (int j = r; j < r + k; j++)
                {
                    // cout << arr[l][m] << " ";
                    arr2[l][m] = arr2[l][m] + arr[i][j];
                }
                // cout << "\n";
            }
            r = r + k;
            if (r >= n)
            {
                r = 0;
                s = s + k;
            }
            if (m < k)
            {
                log("incrementing m");
                m++;
            }
            else if (m >= k)
            {
                log("incrementing l");
                m = 0;
                l++;
            }

            // arr2[l][m] = arr2[l][m] / (k * k);
        }
        for (int i = 0; i < (n / k); i++)
        {
            for (int j = 0; j < (n / k); j++)
            {
                cout << arr2[i][j];
            }
            cout << "\n";
        }
    }

    return 0;
}