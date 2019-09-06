#include<iostream>
using namespace std; 
int main()
{
 int tc1=0,tc2=0,i,j,p,n;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++)
    cin>>a[i];
 for(i=0;i<n;i++)
 { 
  for(j=0;j<n;j++)
     if(a[i]==a[j])
        tc2++;
  if(tc2>tc1)
  { 
    tc1=tc2;
    p=a[i];
  }
 tc2=0;
 }
 cout<<p;
 return 0;
}

