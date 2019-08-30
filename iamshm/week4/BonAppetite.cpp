#include <bits/stdc++.h>
using namespace std;

int main()
{   
int n,k;
cin>>n>>k;
int charged;
int bill[n];
int sum =0;
for(int i=0;i<n;i++){
cin>>bill[i];
sum =sum + bill[i];
}
sum=sum- bill[k];
sum= sum/2;
cin>>charged;
if(sum==charged){
    cout<<"Bon Appetit";
}else{
    cout<<charged-sum;
}

   
}
