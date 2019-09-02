#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, char s[]) {
int valley=0,current_level=0;
for(int i=0;i<n;++i){
if(s[i]=='U')
current_level+=1;
else
current_level-=1;
if(current_level==0 && s[i]=='U')
valley+=1;
}
cout<<"The number  of valleys Gary traversed are "<<valley;
return 0;
}

int main()
{
int n;
cout<<"Enter number of steps in Gary's hike: ";
cin>>n;
char s[n];
cout<<"Describe the path using U and D:";
for(int i=0;i<n;++i){
cin>>s[i];
}
countingValleys(n,s);
return 0;
} 
