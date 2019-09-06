//https://www.hackerrank.com/challenges/drawing-book/problem
#include <bits/stdc++.h>
using namespace std;

int main()
{   int otp=0;
    int n,req;
    cin>>n>>req;
    int u=n;
    if(n%2==0){
        u=n+1;
    }
    int half = n/2;
    if(req>half){
        otp=(u-req)/2;
    }else{
        otp=req/2;
    }
    cout<<otp;
}
//sexy af Algo by Iamshm
