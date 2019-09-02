#include <iostream>
using namespace std;
int main()
{
    int i, j, n, diff, leftrSum = 0;
    int rightlSum = 0;

    cout << "enter n for n * n matrix ";
    cin >> n;
    int arr[n][n];
    cout << "enter values of array" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (
            j = 0; j < n; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }

    for (i = 0; i < n; i++)
    {
        leftrSum += arr[i][i];
        rightlSum += arr[i][(n - 1) - i];
    }
    if (leftrSum > rightlSum)
    {
        diff = leftrSum - rightlSum;
    }
    else
    {
        diff = rightlSum - leftrSum;
    }
    cout << "difference" << endl;
    cout << diff;
}
// for (i = 0; i < n; i++)
// {
//     for (
//         j = 0; j < n; j++)
//     {
//         //cout << arr[i][j];
//         if (i == j)
//         {
//             leftrSum += arr[i][j];
//         }
//         if (i == (n - j - 1))
//         {
//             rightlSum += arr[i][j];
//         }
//     }
//     cout << endl;
// }