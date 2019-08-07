#include <stdio.h>
int main(){
    int n;
    long long int s=0;
    scanf("%d",&n);
    long long int a;
    for (int i=0; i<n; i++)
    {
     scanf("%llu",&a); 
         s=s+a; 
    }
    printf("%llu",s);
}
