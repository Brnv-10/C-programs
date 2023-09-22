#include<stdio.h>
int main()
{
    int a,b,c,i;
    for(i=0;i<1000;i++){
        a=i%10;
        b=(i/10)%10;
        c=i/100;
        if(a*a*a+b*b*b+c*c*c==i){
            printf("%d\n",i);
        }
    }

}