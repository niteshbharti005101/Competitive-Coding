#include<bits/stdc++.h>

using namespace std;
int main(){
   
    int n;
    int k;
    cin >> n >> k;
    int ar[n];
    int rem[k];
    for(int i=0; i<k; i++)
       rem[i]=0;
    for(int i = 0; i < n; i++){
       cin >> ar[i];
       rem[ar[i]%k]++;
    }

    int sum=0;
    sum+=(rem[0]*(rem[0]-1))/2;
    if(k%2==0)
        {
            sum+=(rem[k/2]*(rem[k/2]-1))/2;
        }
    for(int i=1; i<=k/2 ; i++){
        if(i!=k-i)
         sum+=rem[i]*rem[k-i];
    }
    cout<<sum;
    return 0;
}
