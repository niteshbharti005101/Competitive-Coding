#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,y,z,a,b,q;
    cin>>q;
    for (int i=0;i<q;i++){
cin>>x>>y>>z;
 a = abs( x-z); b = abs (y-z);
if (a==b){
    cout<<"Mouse C"<<endl;
}
else if (a>b){
    cout<<"Cat B"<<endl;
}
else if (a<b){
    cout<<"Cat A"<<endl;
}
    }
}
