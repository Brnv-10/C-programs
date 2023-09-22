#include<stdio.h>
int isprime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        break;
    }
    if(i<=n/2)
    return(0);
    else return(1);
}

int main()
{
   int i;
   for(i=2;i<=100;i++)
   if(isprime(i))
   printf("%d\n",i);
}