#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,b,sum=0;
    cin>>n>>k;
    
    int bill[n];
    for (int i=0;i<n;i++){
        cin>>bill[i];
        if (i!=k)
            sum=sum+bill[i];
    }
    cin>> b;
    if (b==sum/2){
        cout<<"Bon Appetit";}
    else {
        int c =b-(sum/2);
        cout<<c;
    }
}
