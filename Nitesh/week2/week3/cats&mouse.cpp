#include <iostream>
using namespace std;
int main()
{
    int n,i,c1,c2;
    cout<<"Enter the sets of input: ";
    cin>>n;
    int a[n],b[n],c[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        
    }
    for(i=0;i<n;i++)
    {
       c1=c[i]-a[i];
       c2=c[i]-b[i];
       if(c1<0)
       c1*=-1;
       if(c2<0)
       c2*=-1;
       if(c1<c2)
       cout<<"Cat A"<<endl;
       else if(c1>c2)
       cout<<"Cat B"<<endl;
       else
       cout<<"Mouse C"<<endl;
    }
}
