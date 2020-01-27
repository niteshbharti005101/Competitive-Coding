#include <bits/stdc++.h>

using namespace std;

int main(){
    int r,sf=0,sb=0;
    cin>>r;
    int a[r][r];
    for (int i=0;i<r;i++){
        for (int j=0;j<r;j++){
            cin>>a[i][j];
        }
    }
    for (int i=0;i<r;i++){
        for (int j=0;j<r;j++){
            if (i==j){
                sf = sf + a[i][j];
                //cout<<"sf = "<<sf;
            }
            if ((i+j)==(r-1)){
                sb = sb +a[i][j];
                //cout<<"sb = "<<sb;
            }
        }
    }
    int x = abs(sf-sb);
    cout<<x;
}
