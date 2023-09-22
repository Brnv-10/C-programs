/* write a program to print the sum and product of the digits of a number*/
#include<stdio.h>
int main()
{
    int n, i,sum=0, product=1;
    printf("enter the number:");
    scanf("%d",&n);
    while (n>0){
        i=n%10;
        sum=sum+i;
        product=product*i;
        n=n/10;
        
    }
    printf("sum is:%d\n",sum);
    printf("product is:%d",product);
     
     
    
}

