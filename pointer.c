#include<stdio.h>

void minmax(int a,int b,int c,int *min,int *max)
{
    *min= (a<b && a<c ? a: (b<c ? b:c));
    *max= (a>b && a>c ? a: (b>c ? b:c));
}

int main()
{
    int x,y,z,min,max ;
    printf("enter three numbers\n");
    scanf("%d%d%d",&x,&y,&z);
    minmax(x,y,z,&min,&max);
    printf("min=%d\n",min);
    printf("max=%d",max);

}