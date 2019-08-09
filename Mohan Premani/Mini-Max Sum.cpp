#include <iostream>
using namespace std;

int main()
{
    long int a[100], n = 5;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    long int min = 0, max = 0;
    for (int i = 0; i < n - 1; i++)
        min += a[i];
    for (int i = 1; i < n; i++)
        max += a[i];

    cout << min << " ";
    cout << max;

    return 0;
}
