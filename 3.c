/*write a program to find the sum of the followinf series to n terms
1+1/2+1/+1/4+1/5*/

#include<stdio.h>

double sum_finder(int n){
    double i; 
    double sum=0.0;
    for(i=1;i<=n;i++){
        sum=sum+1/i ;
    }
    return sum;
}

int main(){
    int n;
    printf("enter no of terms");
    scanf("%d",&n);

    printf("sum is %f", sum_finder(n));
    return 0;
}