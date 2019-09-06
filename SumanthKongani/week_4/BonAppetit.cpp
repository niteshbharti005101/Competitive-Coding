#include <bits/stdc++.h>

using namespace std;


void bonAppetit(int n,int bill[], int k, int b) {
float sum=0;
for(int i=0;i<n;++i){
if(i!=k)
sum+=bill[i];
}
float split=sum/2;
if(split==b)
cout<<"Bon Appetit";
else
cout<<bill[k]/2;
}


int main()
{
int n,k,b;
cout<<"Enter number of items ordered: ";
cin>>n;
int bill[n];
cout<<"Enter the price of "<<n<<" items:";
for(int i=0;i<n;++i){
cin>>bill[i];
}
cout<<"Enter the index of item which Anna declined to eat : ";
cin>>k;
cout<<"Enter the amount of money Brian charged Anna:";
cin>>b;
bonAppetit(n,bill,k,b);
return 0;
}
