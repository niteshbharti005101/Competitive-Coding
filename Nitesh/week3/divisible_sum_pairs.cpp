#include <iostream>
using namespace std;
int main()
{
    int n,k,i,j,c=0;
    cout<<"Enter the number of inputs and key value: ";
    cin>>n>>k;
    int a[n];
    cout<<"Enter the values for the array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[i]+a[j])%k==0)
            c+=1;
        }
    }
    cout<<c;
}
