#include <iostream>
using namespace std;
int main()
{
    int a[5],max,min,s1=0,s2=0;
    cout<<"Input 5 Integers";
    for(int i=0;i<5;i++)
    cin>>a[i];
    max=a[0];
    min=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]!=max && a[i]!=min)
        {
            s1+=a[i];
            s2+=a[i];
        }
    }
    s1+=max;
    s2+=min;
    cout<<s1<<" "<<s2;

    return 0;
}
