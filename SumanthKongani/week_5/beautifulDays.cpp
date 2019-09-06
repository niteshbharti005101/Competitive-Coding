#include<bits/stdc++.h>
using namespace std;
int beautifulDays(int i,int j,int k){    
int n = 0;
for(int p = i; p<=j; p++){
int rem, r = 0, x;
x = p;
int difference;
while(x!=0){
rem=x%10;      
r=r*10+rem;    
x/=10;    
}
difference = r - p;
if(difference % k == 0){
n++;
}
}
return n;
}
int main(){
int i,j,k;
cout<<"Enter the start and ending value of range og Days:";
cin>>i>>j;
cout<<"Enter a divisor:";
cin>>k;
int result=beautifulDays(i,j,k);
cout<<result;
return 0;
}
