#include <iostream>
using namespace std;
int main()
{
    
    int n,c1=0,c2=0,m1,m2;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    m1=a[0];
    m2=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>m1)
        {
            m1=a[i];
            c1+=1;
        }
        if(a[i]<m2)
        {
            m2=a[i];
            c2+=1;
        }
    }
    cout<<c1<<" "<<c2;
}
