#include<stdio.h>
#include<math.h>
int main()
{
    int i,n, sum=0,term;
    printf("enter number of terms");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        term= -1;
        term=pow(term,i);
        sum=sum+(i+1)*term;
    }
    printf("sum of the series=%d\n",sum);
    return 1;
}