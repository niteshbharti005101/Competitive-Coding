#include <bits/stdc++.h>
using namespace std;

int birthday(int s[],int n, int d, int m) {
int result = 0, sum;
for(int i=0; i < n; i++){
sum=0;
for(int j=0; j < m; j++){
int birth = i + j;
if(birth < n){
sum += s[birth];
}
}
if(sum == d){
result++;
}
}
cout<<"the total number of ways that Lily can portion her chocolate bar to share with Ron :"<<result;
return 0;
}
int main(){
int n;
cout<<"Enter number of squares in the chocolate bar : ";
cin>>n;
int s[n];
cout<<"the numbers on the chocolate squares : ";
for(int i=0;i<n;++i){
cin>>s[i];
}
int d,m;
cout<<"Enter Ron's birth day and his birth month respectively:";
cin>>d>>m;
birthday(s,n,d,m);

return 0;
}
