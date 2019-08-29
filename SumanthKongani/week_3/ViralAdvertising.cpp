#include <bits/stdc++.h>
using namespace std;

int viralAdvertising(int n) {
int shared=5;
int liked;
int cumulative=0;
for(int i=0;i<n;++i){
liked=shared/2;
cumulative=cumulative+liked;
shared=liked*3;
}
cout<<"the number of people who liked the advertisement during the first "<<n<<" days:"<<cumulative;
return 0;
}

int main(){
int n;
cout<<"Enter number of days :";
cin>>n;
viralAdvertising(n);
return 0;
}
