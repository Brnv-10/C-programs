/*Write a program to compute the sum of the first n terms of the following series
S =1-2+3-4+5…………….*/
#include<stdio.h>
int main(){
    int s, sum=0,n;
    printf("enter number of terms");
    scanf("%d",&n);
    for(s=1;s<=n;s++){
        if(s%2!=0){
            sum=sum+s;
        }
        else{
            sum=sum-s;
        }
    }
    printf("sum of the series is%d",sum);
    return 0;


}
