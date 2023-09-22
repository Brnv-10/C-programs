#include<stdio.h>
int main()
{
 int a,b,c,n;
 printf("enter any number");
 scanf("%d",&n);
 for(a=1;a<=n;a++)
 {
    for(b=a;b<=n-1;b++)
    printf(" ");
    for(c=1;c<=2*a-1;c++)
    printf("*");
    printf("\n");
 }
return 1;
}

