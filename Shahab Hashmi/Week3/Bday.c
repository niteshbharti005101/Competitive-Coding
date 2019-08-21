#include<stdio.h>
int main(){
    int n,d,m;
    
    scanf("%d",&n);
    int s[n];
   for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    scanf("%d",&d);
   
    scanf("%d",&m);
    int NOW=0,sum[n],temp;
    for(int j=0;j<n;j++){
        temp=0;
        for(int k=j;k<m+j;k++){
            temp+=s[k];
        }
        sum[j]=temp;
    }
    int c;
    for(c=0;c<n;c++){
        if(sum[c]==d){
            NOW+=1;
        }
    }
    printf("%d",NOW);
}
