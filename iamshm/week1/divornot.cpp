#include <iostream>

#include <sstream>
using namespace std;
int main()
{
    int l, r, k, i, c;
    cin >> l >> r >> k;
        for (int i = l; i <= r; i++)
    {
        if (i % k == 0)
        {
            c++;
        }
    }
    cout << c;
}
// void mainfn(string str)
// {
//     int l, r, k;
//     int c;
//     istringstream s1(str);

//     s1 >> l >> r >> k;
//     cout << l << endl
//          << r << endl
//          << k << endl;
//     for (int i = l; i <= r; i++)
//     {
//         if (i % k == 0)
//         {
//             c++;
//         }
//     }
//     cout<<c;
// }

// int main()
// {
//     string str;
//     cout << "give three values with a space" << endl;
//     getline(cin, str);
//     mainfn(str);
// }
