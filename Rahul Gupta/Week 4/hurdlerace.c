#include<stdio.h>
int main(){
    int n, k, height[100], max = 0;
    scanf("%d %d",&n, &k);

    for(int i=0; i<n; i++){
        scanf("%d ", &height[i]);
        if(height[i]>max){
            max = height[i];
        }
    }
    if(max > k){
        printf("%d", max - k);
    }
    else if(max < k){
        printf("0");
    }
    
    return 0;
}