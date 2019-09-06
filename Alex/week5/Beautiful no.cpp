#include <iostream>
using namespace std;
int main()
{
    int i,j,k,t1=0,t2=0,temp,a,c=0;
    cin>>i>>j>>k;
    for(a=i;a<=j;a++)
    {   
        t1=a,temp=a;
        while(t1>0)
        {   
            t2*=10;
            t2+=t1%10;
            t1/=10;
        }
        if((t2-temp)%k==0)
        {
            c++;
        }
        t2=0;
    }
    cout<<c;
    return 0;
}



   
