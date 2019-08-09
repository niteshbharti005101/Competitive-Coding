#include<stdio.h>
int main(){
    int n; int grades[100];
    scanf("%d",&n);
    for (int i=0; i<n;i++){
        scanf("%d",&grades[i]);
    }
    for (int i=0; i<n;i++){
        if (grades[i] >=38){
            int a=grades[i]%5;
            int b= 5-a;
            if (b<3){
            grades[i]=grades[i]+b;
            }
        }
    }
    for (int i=0; i<n; i++){
       printf("%d\n",grades[i]);
    }
}
