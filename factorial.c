#include<stdio.h>
int main()
{

int i,n,fact=1;
scanf("%d",&n);
    for(i=1; i<=n; i++)
    { fact=fact*i;
      }  
        
printf("The factorial value is=%d\n",fact);
}
