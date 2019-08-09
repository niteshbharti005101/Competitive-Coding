#include <iostream>
using namespace std;

int main()
{
    float n, cnt = 0, a, p = 0, ne = 0, z = 0, fact1, fact2, fact3;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a > 0)
            p++;
        else if (a < 0)
            ne++;
        else if (a == 0)
            z++;
    }
    fact1 = p / n;
    fact2 = ne / n;
    fact3 = z / n;
    cout << fact1 << "\n";
    cout << fact2 << "\n";
    cout << fact3 << "\n";

    return 0;
}
