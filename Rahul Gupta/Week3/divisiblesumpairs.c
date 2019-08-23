#include<stdio.h>
int main(){
    int n, k, arr[100], counter = 0;

    scanf("%d %d", &n, &k);

    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
    }

    for(int i=0; i<n; i++){
        int x = 0;
        for(int j=i+1; j<n; j++){
            x = arr[i]+arr[j];
            if(x%k == 0){
                counter+=1;
            }
        }
    }

    printf("%d", counter);
    return 0;
}