#include <bits/stdc++.h>

using namespace std;


int breakingRecords(int n,int scores[]) {
int best_c=0;
int worst_c=0;
int max,min,s;
for(int i=0; i<n;++i){
if(i==0){
s=scores[0];
max=s;
min=s;
}
else{
s=scores[i];
if(s<min){
min=s;
worst_c++;
}
else if(s>max){
max=s;
best_c++;
}
}
}
cout<<"Number of times best score:"<<best_c<<"\n";
cout<<"Number of times worst score:"<<worst_c;
return 0;
}

int main()
{
int n;
cout<<"Enter number of games : ";
cin>>n;
int score[n];
cout<<"Enter scores of "<<n<<" games respectively: ";
for(int i=0;i<n;++i){
cin>>score[i];
}
breakingRecords(n,score);
return 0;
}
