#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i, n, j, k;
    cout << "enter n = ";
    cin >> n;
    cout << "b4 loops" << endl;
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= (n - i); k++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "#";
        }
        cout << endl;
    }
}