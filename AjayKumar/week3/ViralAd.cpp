#include <bits/stdc++.h>

using namespace std;


int main(){
    int n,share,like,count=0;
    cin>>n;
    share =5;
    for (int i=0;i<n;i++){
        like = share/2;
        share=like*3;
        count=count+like;
    }
    cout<<count;
}
