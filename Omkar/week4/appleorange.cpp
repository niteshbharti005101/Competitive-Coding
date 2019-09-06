#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s,t,a,b,m,n,ap,acnt = 0,o,ocnt = 0;
    
    cin >> s >> t >> a >> b >> m >> n;
    
    for(int i = 0;i < m;i++)
 {
        cin >> ap;
        if(a+ap >= s && a+ap <= t)acnt++;
    }
    
    for(int i = 0;i < n;i++)
 {
        cin >> o;
        if(b+o >= s && b+o <= t)ocnt++;
    }
    cout << acnt <<endl<< ocnt << endl;
    return 0;
}
