#include<stdio.h>
int main(){
    int n, d, m, s[100], counter=0;

    scanf("%d", &n);
    for(int i=0; i<n; i++){
       scanf("%d ", &s[i]);
    }
    scanf("%d %d", &d, &m);
    
    for(int i=0; i<n-m; i++){
        int sum=0;
        for(int j=i; j<m+i; j++){
            sum += s[j];
        }
        if(sum==d){
            counter+=1;
        }
    }
    
    printf("%d", counter);
    return 0;
}