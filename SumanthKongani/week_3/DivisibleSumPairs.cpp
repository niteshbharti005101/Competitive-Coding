#include <bits/stdc++.h>

using namespace std;


int divisibleSumPairs(int n, int k, int ar[]) {
int count=0;
for(int i=0;i<n-1;i++){
for(int j=i+1;j<n;j++){
if((ar[i]+ar[j])%k==0)
count=count+1;
}
}
cout<<"the number of (i,j)  pairs where i<j  and a[i]  + a[j]  is evenly divisible by k: "<<count;
return 0;
}

int main()
{
int n,k;
cout<<"Enter number of elements in the array : ";
cin>>n;
int ar[n];
cout<<"Enter the "<<n<<" elements into the array: ";
for(int i=0;i<n;i++){
cin>>ar[i];
}
cout<<"Enter the integer to divide the pair sum by : ";
cin>>k;
divisibleSumPairs(n,k,ar);
return 0;
}
