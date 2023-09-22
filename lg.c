#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
    printf("%d is the smallest number\n",a);
    else{
        if(b<c)
        printf("%d is the smallest number\n",b);
        else
        printf("%d is the smallest number\n",c);
    }
    return 1;
}