/*Write a macro that swaps two numbers. Write a program to use it.*/
#include<stdio.h>
int swap(int *c,int *d){
    int *t;
    &t=&c;
    &c=&d;
    &d=&t;
}
int main(){
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    int swap(a,b);
    printf("atfer swapping %d%d",a,b);
    return 0;
}
