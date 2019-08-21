#include<stdio.h>
void main(){
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	int share,like,Cumulative;
	share=5;
	Cumulative=0;
	for(int i=0;i<n;i++){
		like=(int)(share/2);
		printf("%d\n",like );
		share=like*3;
		Cumulative+=like;
	}
	printf("No of people who liked advertisement are:%d\n",Cumulative);
}