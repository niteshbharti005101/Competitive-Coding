#include<stdio.h>
int main(){
    int a, b, c, x;
    scanf("%d", &x);

    for(int i=0; i<x; i++){
        scanf("%d %d %d", &a, &b, &c);
        int A = c-a;
        int B = c-b;

        if(A<0){
            A = a-c;
        }
        if(B<0){
            B = b-c;
        }
        if(A==B){
            printf("Mouse C\n");
        } else if(A>B){
            printf("Cat B\n");
        } else if(A<B){
            printf("Cat A\n");
        }
    }

    return 0;
}