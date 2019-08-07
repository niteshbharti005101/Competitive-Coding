#include <stdio.h>
int main(){
    long int a[1000];int n=5;
    scanf("%d %d %d %d %d ",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for (int i=0 ;i<n-1;i++){
    for (int j=0 ;j<n-i-1;j++)
    {
      if (a[j] > a[j+1]) 
      {
        int temp =a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
     // else continue;
    }}

   // for (int i=0; i<5; i++){
    //   printf("%d\n",a[i]);}
    //printf("\n");
    int min =a[0]+a[1]+a[2]+a[3];
    int max =a[1]+a[2]+a[3]+a[4];
    printf("%d %d",min,max);

return 0;
}
