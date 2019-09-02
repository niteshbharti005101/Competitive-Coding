#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,a,b,m,n,y,z;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int apples=0;
    int oranges=0;
    int app[m];
    int org[n];
    for(int i=0;i<m;i++)
    {
        cin>>app[i];
        y = a+app[i];
        if(y>s-1 && y<t+1)
        {
            apples++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cin>>org[i];
        z = b+org[i];
        if(z>s-1 && z<t+1)
        {
            oranges++;
        }
    }
    cout<<apples<<endl<<oranges;
}
