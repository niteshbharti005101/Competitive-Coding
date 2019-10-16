#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,i,j,c,n,k;
    cin>>t;
    for (i = 0; i<t;i++){
        cin>>n>>k;
        int a[n];
        c=0;
        for (j=0;j<n;j++){
            cin>>a[j];
            if (a[j]<=0)
                c=c+1;
        }
        if (c>=k)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
