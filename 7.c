/*Write a program to compute the factors of a given number*/
#include<stdio.h>
int main(){
    int a,i;
    printf("enter the number");
    scanf("%d",&a);
    for(i=2;i<=a/2;i++){
        if(a%i==0){
            printf("%d\n",i);
        }
        
    }
    return 0;
}