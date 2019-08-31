#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int height[n];
    int maxh=k;
    for(int i=0;i<n;i++){
    cin>>height[i];
    if(height[i]>maxh)
    {
        maxh=height[i];
    }
    }
    cout<<abs(maxh-k);
}
