#include<iostream>
using namespace std;
int main()
{
    int temp=1,n,i,j,t=0;
    cin>>t;
    int a[t];
    for(i=0;i<t;i++)
        {
            cin>>n;
            a[i]=n;
        }
    for(i=0;i<t;i++)
    {
        for(j=0;j<a[i];j++)
        {
            if(j%2==0)
                temp*=2;
            else 
                temp+=1;
        }
        cout<<temp<<endl;
        temp=1;
    }
    return 0;
}
 
