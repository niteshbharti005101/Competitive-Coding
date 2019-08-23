#include <iostream>
using namespace std;
int main()
{
    int a[100],n,k,s1=0;
    cout<<"Enter the number of integers to be taken";
    cin>>n;
    cout<<"Enter the value for k ";
    cin>>k;
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(i!=j && ((a[i]+a[j])%k!=0))
            s1+=1;
        }
    }
    cout<<s1;
       
    return 0;
}
