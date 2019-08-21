#include<stdio.h>
void main(){
	int n,k;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter k:");
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
	printf("No of combinations are :%d\n",Combinations);
}