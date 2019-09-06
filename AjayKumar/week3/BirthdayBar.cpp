#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,d,m,count=0;
    cin>>n;
    int s[100];
    for (int i=0;i<n;i++){
        cin>>s[i];
    }
    cin>>d>>m;
    for (int i=0; i<n; i++){
        int sum = 0;
        for (int j = 0; j < m; j++) { 
            sum = sum + s[i + j]; } 
        if (sum == d) {
             count++; } 
    } 
    cout<< count;
    
}
