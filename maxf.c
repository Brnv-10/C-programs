#include<stdarg.h>
#include<stdio.h>
int max(int a,...)
{
int i,n,t;
va_list x ;
va_start(x,a);
for(i=0;i<a;i++)
{
t=va_arg(x,int);
if(i==0) 
{
   n=t;
}
else
{
   n=t>n ? t:n;
} 
}
return n;
}

int main()
{
   int a,b,c,d,e;
   printf("%d\n",max(9,4,5,6,7,8,9,3,2,1));
}



