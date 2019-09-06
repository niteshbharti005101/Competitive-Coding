#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, int ar[]) {
    
    int f[5];
    for(int i=1;i<=5;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(ar[j]==i)
            {
                c++;
            }
            f[i-1]=c;
        }
    }
    int max=f[0],loc=0;
    for(int k=1;k<5;k++)
    {
        if(f[k]>max)
        {
            max=f[k];
            loc=k;
        }
        
    }
    return (loc+1);
}

int main() {
    int n;
    cout<<"Enter number of birds sighted: ";
    cin >> n;
    
    int ar[n];
    cout<<"Enter the type numbers of each bird: ";
    for(int i = 0; i < n; i++){
       cin >> ar[i];
    }
    int result = migratoryBirds(n, ar);
    cout <<"The type number that occurs at the highest frequency is type: "<< result << endl;
    return 0;
}
