#include <bits/stdc++.h>
using namespace std;
 
int hurdleRace(int k,int n, int height[]) {
int dose=0;
int max=height[0];
for(int i=0;i<n;i++){
if(height[i]>max)
max=height[i];
}
if(k<max){
dose=max-k;
}
cout<<"The max number of dose Dan should dirnk : "<<dose;
return 0;
}
 
int main()
{
int n,k;
cout<<"Enter number of hurdles in the game :";
cin>>n;
cout<<"Enter the maximum height Dan can jump naturally :";
cin>>k;
int height[n];
cout<<"Enter the hurdle heights: ";
for(int i=0;i<n;++i){
cin>>height[i];
}
hurdleRace(k,n,height);
return 0;
}
