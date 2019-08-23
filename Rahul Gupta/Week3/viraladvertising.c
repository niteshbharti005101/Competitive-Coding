#include<stdio.h>
int main(){
    int n, cumulative=0, liked=0, shared = 5;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        liked = (shared/2);
        cumulative+=liked;
        shared = liked * 3;
    }

    printf("%d", cumulative);
}