/*write a program to reverse the digit of a number*/
#include<stdio.h>
int main()
{
    int n,rev, rem;
    printf("enter a number");
    scanf("%d",&n);
    rev=0;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("reversed number is:%d",rev);
    return 0;
}