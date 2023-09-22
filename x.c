#include<stdio.h>
int main()
{
    int a=0,b=0;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    if(a&&b!=0){
    a=(b-a)+a;
    b=(a-b)+b;
    printf("%d",a);
    printf("%d",b);
    }
    
    
    return 1;
}