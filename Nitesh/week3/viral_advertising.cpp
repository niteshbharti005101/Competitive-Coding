#include <iostream>
using namespace std;
int main()
{
    int n,a=5,i,c=0,m;
    cout<<"Enter the no. of days: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        m=a/2;
        c+=m;
        a=m*3;
    }
    cout<<c;
}
