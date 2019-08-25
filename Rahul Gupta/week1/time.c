#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int a, b, c;
    char d[3];
    printf("Enter time: ");
    scanf("%d:%d:%d %s", &a, &b, &c, d);
    
    if(strcmp(d,"PM")==0 && a!=12){
        a += 12;
    }
    if(strcmp(d,"PM")==0 && a==12){
        a = 0;
    }

    printf("Military time: ");
    printf("%02d:%02d:%02d", a, b, c);

    return 0;
}