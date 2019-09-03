#include<stdio.h>

int n=4;
int main(){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
         	if(j<n-1-i) {
         		printf(" ");
         	} else {
         		printf("#");
         	}
        }
        printf("\n");
    }

    return 0;
}