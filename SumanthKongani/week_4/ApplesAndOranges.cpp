#include <bits/stdc++.h>
using namespace std;
int countApplesAndOranges(int s, int t, int a, int b,int n,int m ,int apples[],int oranges[]){
int ap_count=0,or_count=0;
for(int i=0;i<n;i++){
apples[i]=apples[i]+a;
}
for(int i=0;i<n;i++){
if(apples[i]>=s && apples[i]<=t)
ap_count+=1;
}
 
for(int i=0;i<m;i++){
oranges[i]=oranges[i]+b;
}
for(int i=0;i<m;i++){
if(oranges[i]>=s && oranges[i]<=t)
or_count+=1;
}
cout<<"The number of apples fell in sam house: " <<ap_count<<"\n";
cout<<"The number of orangers fell in sam house: "<<or_count;
return 0;
}
 
 
int main(){
int s,t;
cout<<"Enter the starting and ending points of sam's house respectively: ";
cin>>s>>t;
int a,b;
cout<<"Enter the location of the apple tree and the orange tree respectively:";
cin>>a>>b;
int n,m;
cout<<"Enter number of apples and oranges fell from tree respectively:";
cin>>n>>m;
int apple[n],orange[m];
for(int i=0;i<n;++i){
cout<<"Enter the distance apple "<<i+1<<" fell from the tree";
cin>>apple[i];
}
for(int i=0;i<m;++i){
cout<<"Enter the distance orange "<<i+1<<" fell from the tree";
cin>>orange[i];
}
countApplesAndOranges(s,t,a,b,n,m,apple,orange);
return 0;
}
