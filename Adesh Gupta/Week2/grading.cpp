#include <iostream>
using namespace std;
int main()
{
    int arr[100],n,r,p,s;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=38 &&arr[i]<=100)
        {
            r=arr[i]%5;
            p=5-r;
            if(p<3)
            arr[i]+=p;
        }
        cout<<arr[i];
        cout<<endl;
    }
    
}
