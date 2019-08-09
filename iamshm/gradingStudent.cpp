#include <bits/stdc++.h>

using namespace std;
int main(){
    int i,n;
    cin>>n;
    int grades[n],finals[n];
    for (i=0;i<n;i++)
    { cin>>grades[i];
     float roundUp=grades[i]%5;
    if(roundUp>=3 && grades[i]>=38)
    {
        finals[i]=grades[i]+(5-roundUp);
            }
            else{
                finals[i]=grades[i];
            }
             }
    for(i=0;i<n;i++){
    cout<<finals[i]<<endl;}

}
