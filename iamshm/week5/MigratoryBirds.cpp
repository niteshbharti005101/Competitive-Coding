#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int count[6]={0,0,0,0,0,0};
    for (int i=0;i<n;i++){
        cin>>a[i];
        count[a[i]]++;
    }
    int c=0;
    int counter = count[5];
    for(int i= 5;i>=1;i--){
        //going backwards cos we want min bird number
    if(counter<=count[i]){
        counter = count[i];//comparing frequency
        c=i;//assignibg bird number
    }
    }
    cout<<c;
}
