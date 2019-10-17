#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x;
    cin>>n;
    int p[n];
    for (int i =1; i<=n;i++){
        cin>>x;
        p[x]=i;
    }
    for (int i=1;i<=n;i++){
        cout<<p[p[i]]<<endl;
    }
}
