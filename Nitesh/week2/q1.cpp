#include <iostream>
using namespace std;
int main()
{
    int a[100],b[100],n,k,s1=0,s2=0;
    cout<<"Enter the number of integers to be taken";
    cin>>n;
    cout<<"Enter the numbers for array A"<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter the numbers for array B"<<endl;
    for(int i=0;i<n;i++)
    cin>>b[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]>b[i])
        s1+=1;
        else if(b[i]>a[i])
        s2+=1;
    }
    cout<<s1<<" "<<s2;
    return 0;
}
