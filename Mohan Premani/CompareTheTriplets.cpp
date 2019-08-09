#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a[3], b[3], aVal = 0, bVal = 0;

    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];

    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            aVal++;
        }

        else if (a[i] < b[i])
        {
            bVal++;
        }
    }
    cout << aVal << " " << bVal << endl;
    return 0;
}
#include <iostream>
