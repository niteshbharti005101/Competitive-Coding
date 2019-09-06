#include <stdio.h>
#include<string.h>

int main()
{
int a[26]={0};
char S1[100000],S2[100000];
int T,i,j;
scanf("%d",&T);
int n1 = strlen(S1);
for(i=0;i<T;i++)
{
    scanf("%s",S1);
    scanf("%s",S2);
    
    
        for(j=0;j<26;j++)
            a[j]=0;
            
        for( j=0;j<n1;j++)
        {
            a[S1[j]-'a']++;
            a[S2[j]-'a']--;
        }
            
        for(j=0;j<26;j++)
            if(a[j]!=0)
            break;
            
            if(j==26)
            printf("YES\n");
            else
            printf("NO\n");
          
}
return 0;
}