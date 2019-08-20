#include<stdio.h>
void main(){
	int x,y,z,A,B,n;
	printf("Enter n");
	scanf("%d",&n);
	for(int c=0;c<n;c++){
		printf("Enter position of Cat A:");
		scanf("%d",&x);
		printf("Enter position of Cat B:");
		scanf("%d",&y);
		printf("Enter position of Mouse C:");
		scanf("%d",&z);
		A=x-z;
		if(A<0){
			A=-A;
		}
		B=y-z;
		if(B<0){
			B=-B;
		}
		if(A>B){
			printf("Cat B\n");
		}
		else if(A<B){
			printf("Cat A\n");
		}
		else{
			printf("Mouse C\n");
		}
	}
}