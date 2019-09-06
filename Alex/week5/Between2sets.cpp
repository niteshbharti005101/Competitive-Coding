#include <iostream>
using namespace std;
int main()
{
    int i,j,n,m,k,t1,t2,c=0,tc1=0,tc2=0;
    cin>>n>>m;
    int a[n],b[m];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    k=a[0],i=0,t1=a[0],t2=b[0];
    for(i=0;i<n;i++)
        if(t1<a[i])
            t1=a[i];
    for(i=0;b[i]!='\0';i++)
        if(t2>b[i])
            t2=b[i];
    for(i=t1;i<=t2;i++)
    {   tc1=0,tc2=0;
        for(j=0;j<n;j++)
            if(i%a[j]!=0)
                tc1++;       
        for(j=0;j<m;j++)
            if(b[j]%i!=0)
                tc2++;
        if(tc1==0 && tc2==0)
            c++;
    }
    cout<<c;
    return 0;
}



   
