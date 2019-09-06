#include<bits/stdc++.h>
using namespace std;
int main(){
 
int n,b=0,c=0;
cin>>n;
int scores[n];

for (int i =0;i<n;i++){
    cin>>scores[i];
    }
int min=scores[0],max=scores[0];
for (int i =0;i<n;i++){
    if (min>scores[i]){
        min = scores[i];
        b++;
        }
    else if (max<scores[i]){
        max = scores [i];
        c++;
        }
    }
    cout<<c<<" "<<b;
    return 0;
}
