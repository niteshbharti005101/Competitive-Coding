#include <iostream>

using namespace std;
void seats(int sn)
{

    char w[10] = "ws";
    char m[10] = "ms";
    char a[10] = "as";
    if (sn > 0 && sn <= 108)
    {
        if (sn % 12 == 0)
        {
            cout << (sn - 11) << "  " << w;
        }
        else if (sn % 12 == 11)
        {
            cout << (sn - 9) << "  " << m;
        }
        else if (sn % 12 == 10)
        {
            cout << (sn - 7) << "  " << a;
        }
        else if (sn % 12 == 9)
        {
            cout << (sn - 5) << "  " << a;
        }
        else if (sn % 12 == 8)
        {
            cout << (sn - 3) << "  " << m;
        }
        else if (sn % 12 == 7)
        {
            cout << (sn - 1) << "  " << w;
        }
        else if (sn % 12 == 6)
        {
            cout << (sn + 1) << "  " << w;
        }
        else if (sn % 12 == 5)
        {
            cout << (sn + 3) << "  " << w;
        }
        else if (sn % 12 == 4)
        {
            cout << (sn + 5) << "  " << w;
        }
        else if (sn % 12 == 3)
        {
            cout << (sn + 7) << "  " << w;
        }
        else if (sn % 12 == 2)
        {
            cout << (sn + 9) << "  " << w;
        }
        else if (sn % 12 == 1)
        {
            cout << (sn + 11) << "  " << w;
        }
    }
    cout << endl;
}

int main()
{
    int sn, n;
    cout << "no inputs " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter seat no : " << endl;
        cin >> sn;
        seats(sn);
    }
}