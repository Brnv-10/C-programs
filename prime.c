#include<stdio.h>
int main()
{
    int i, num;
    printf("input");
    scanf("%d",&num);
    int flag=0;
   
    for(i=2;i<=num/2 && flag==0;i++)
    {
        if(num%i==0)
        {
            flag=1;
            printf("not a prime number");
        }
        else{
            printf("prime number");

        }
        return 1;
    }
    
}