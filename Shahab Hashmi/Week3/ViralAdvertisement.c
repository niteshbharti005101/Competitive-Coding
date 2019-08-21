#include<stdio.h>
int main(){
	int n;
	
	scanf("%d",&n);
	int share,like,Cumulative;
	share=5;
	Cumulative=0;
	for(int i=0;i<n;i++){
		like=(int)(share/2);
		
		share=like*3;
		Cumulative+=like;
	}
	printf("%d\n",Cumulative);
}