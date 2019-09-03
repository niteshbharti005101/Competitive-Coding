#include<stdio.h>
#include<stdlib.h>

int main() {

	int a[3], counter=0, i;
	printf("Enter start of range, end of range, divisor\n");
	scanf("%d %d %d", &a[0], &a[1], &a[2]);

	for(i=a[0]; i<=a[1]; i++){
		
		if(i%a[2]==0){
			counter++;
		}
	}

	printf("Count: %d\n", counter);

	return 0;
}