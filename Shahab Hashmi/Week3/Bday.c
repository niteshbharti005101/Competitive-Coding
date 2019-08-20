#include<stdio.h>
void main(){
    int n,d,m;
    printf("Enter length of array:");
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    printf("Enter Birth date:");
    scanf("%d",&d);
    printf("Enter birth month:");
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
    printf("No of possible combinations is :%d\n",NOW);
}
