#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n,c=0;
    int change=0;
    cin >>n;
    int a[n];  
    int max=0;
    for(int i=0;i<n;i++)
    {    cin>>a[i];

        if (a[i]>=max)
        {
            max=a[i];
            if (change<max){
                change=max;
                c=1;
            }else{
                c++;
            }             
        }
    }
    cout<<c;
    return 0;
}
