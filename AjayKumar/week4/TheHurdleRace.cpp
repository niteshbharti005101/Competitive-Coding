#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,max=0;
    cin>>n>>k;
    int height[n];
    for (int i=0;i<n;i++){
        cin>>height[i];
        if (max<height[i])
            max=height[i];
    }
    if (k<max){
        int a = max-k;
        cout<<a;
    }
    else {
        int a =0;
        cout<<a;
    }
}
