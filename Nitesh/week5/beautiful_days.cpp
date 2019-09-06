#include <iostream>
using namespace std;
int main()
{
    int i,j,k,n1,n2,r,k1=0,c=0,s;
    cin>>i>>j>>k;
    for(int n=i;n<=j;n++)
    {
        n1=0;
        n2=n;
        while(n2!=0)
        {
            r=n2%10;
            n1+=r;
            n2=n2/10;
            if(n2==0)
            n1=n1;
            else
            n1*=10;
        }
        s=n-n1;
        if(s%k==0)
        c+=1;
    }
    cout<<c;
    return 0;
}
