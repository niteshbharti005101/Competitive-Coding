#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,h,max=-1,counter;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        {
           scanf("%d",&h);
        if(max<h)
            {
            max=h;
            counter=1;
        }
        else
            {
            if(max==h)
             counter++;   
        }
    }
    printf("%d\n",counter);
    return 0;
}