#include <iostream>
using namespace std;
int main()
{
    
    int n,c=0,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    m=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
        }
    }
    c=0;
    for(int i=0;i<n;i++)
    {
        if(m==a[i])
        c+=1;
    }
    cout<<c;
}

