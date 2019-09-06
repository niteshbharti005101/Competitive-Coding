#include <iostream>
using namespace std;
int main()
{
    
    int n,m,s,t,a,b,c1=0,c2=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int c[m],d[n];
    for(int i=0;i<m;i++)
    {
        cin>>c[i];
        c[i]+=a;
    }
    for(int i=0;i<n;i++)
    {
        cin>>d[i];
        d[i]+=b;
    }
    for(int i=0;i<m;i++)
    {
        if(c[i]>=s && c[i]<=t)
        c1+=1;
    }
    for(int i=0;i<n;i++)
    {
        if(d[i]>=s && d[i]<=t)
        c2+=1;
    }
    cout<<c1<<endl;
    cout<<c2;
}
