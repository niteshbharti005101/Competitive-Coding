#include<stdio.h>
int main(){
    int i, j, k, days = 0, remainder, reversedNumber;
    scanf("%d %d %d", &i, &j, &k);
    for(int x = i; x<=j; x++){
        int n = x;
        while (n != 0){
            remainder = n%10;
            reversedNumber = reversedNumber*10 + remainder;
            n /= 10;
        }
        if(x>reversedNumber){
            if((x-reversedNumber)%k == 0){
                days++;
            }
        } else {
            if((reversedNumber-x)%k == 0){
                days++;
            }
        }
    }
    printf("%d", days);
    return 0;
}
