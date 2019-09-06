#include <iostream>
using namespace std;
int main()
{
    
    int n,k,m,s;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    m=a[0];
    for(int i=0;i<n;i++)
    {
       if(a[i]>m)
       m=a[i];
    }
    s=m-k;
    if(s<0)
    cout<<0;
    else
    cout<<s;
}

