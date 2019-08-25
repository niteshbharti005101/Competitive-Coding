#include<stdio.h>
int main(){
    int n, level = 0, valley = 0;
    char s[1000000];

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%c", &s[i]);
    }

    for(int i=0; i<n; i++){
        if(s[i]=="U"){
            level += 1;
        }
        else if(s[i]=="D"){
            level -= 1;
        }
        if(level == 0 && s[i]=="D"){
            valley += 1;
        }
    }

    printf("%d", valley);

    return 0;

}   