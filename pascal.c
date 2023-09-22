#include<stdio.h>
int fact(int f)
{
    int i,p=1;
    for(i=1;i<=f;i++)
    p=p*i;
    return p;
}
int ncr(int n,int r)
{
    int nc;
    nc=fact(n)/(fact(r)*fact(n-r));
    return nc;
}
int main()
{
    int ln=13,i,j,k;
    scanf("%d",&ln);
    for(i=0;i<=ln;i++)
    {
        for(k=i;k<=ln-1;k++)
        printf(" ");
        for(j=0;j<=i;j++)
        printf("%d",ncr(i,j));

        printf("\n");
    }
return 1;
}
