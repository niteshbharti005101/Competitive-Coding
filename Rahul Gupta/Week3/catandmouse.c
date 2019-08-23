#include<stdio.h>
int main(){
    int a, b, c, x;
    scanf("%d", &x);

    for(int i=0; i<x; i++){
        scanf("%d %d %d", &a, &b, &c);

        if((c-a)==(c-b)){
            printf("Mouse C");
        } else if((c-a)>(c-b)){
            printf("Cat A");
        } else if((c-a)>(c-b)){
            printf("Cat B");
        }
    }

    return 0;
}