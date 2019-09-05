#include <bits/stdc++.h>

using namespace std;

int main(){
    int s,t,a,b,m,n,capples=0,coranges=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int apples[m]; int oranges[n];
    for (int i=0;i<m;i++){
        cin>>apples[i];
        if (a+apples[i]>=s && a+apples[i]<=t)
            capples++;
    }
    for (int i=0;i<n;i++){
        cin>>oranges[i];
        if (b+oranges[i]<=t && b+oranges[i]>= s)
            coranges++;
    }
    cout<<capples<<"\n";
    cout<<coranges;

}
