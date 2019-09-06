#include <bits/stdc++.h>
using namespace std;

void record (int scores[],int n)
{
    int min=scores[0];
    int minc=0;
    int max=scores[0];
    int maxc=0;
    for(int i=0;i<n;i++){
        if(scores[i]>max)
        {
            maxc++;
            max=scores[i];
        }
        else if (scores[i]<min) {
        minc++;
        min=scores[i];
        }
    } 
    cout<<maxc<<" "<<minc;
}
int main()
{
    int n;
    cin>>n;
    int scores[n];
    for(int i =0;i<n;i++){
        cin>>scores[i];
    }
    record(scores,n);
}
