#include<stdio.h>
int main(){
    int n,x,fact=1,temp;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
        x=a[j]/5;
        if(x>=7){
            fact=(x+1)*5;
            if(fact-a[j]<3){
                a[j]=fact;
            }
            else{
                a[j]=a[j];
            }
        }
        else{
            a[j]=a[j];
        }
    }
    
    for(int k=0;k<n;k++){
        printf("%d\n",a[k]);
    }
}