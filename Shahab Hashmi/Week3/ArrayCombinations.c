#include<stdio.h>
int main(){
    int n,k;
    
    scanf("%d",&n);
    
    scanf("%d",&k);
    int a[n],i,j,c;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int Combinations=0;
    for(j=0;j<n;j++){
        int temp=0;
        for(c=j+1;c<n;c++){
            temp=0;
            temp=a[j]+a[c];
        
            if(temp%k==0){
                Combinations+=1;
            }
        }
    }
    printf("%d\n",Combinations);
}
