#include<iostream>
using namespace std;
int main ()
{
    int arr[10000], n, i, sum = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum;
    return 0;
}
