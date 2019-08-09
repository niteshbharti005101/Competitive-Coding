#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int a[5],s[5];
    long int max,min,sum=0;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=0;i<5;i++)
    {
        s[i]=sum-a[i];
        if(max<s[i])
        {max=s[i];}
        if(min>s[i])
        {min=s[i];}
    }
    min =s[0];
    max=s[0];       
    for(int i=0;i<5;i++)
    {
        
        if(max<s[i])
        {max=s[i];}
        if(min>s[i])
        {min=s[i];}
    } 
cout<< min<<" "<<max;
    return 0;
}
