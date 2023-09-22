/*Write a function to find whether a given no. is prime or not. Use the same to generate the prime
numbers less than 100.*/

#include<stdio.h>
int main(){
    int n,i,j,k,sum=0,sum1=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=2;i<n/2;i++){
        if(n%i==0){
            sum=sum+1;
        }
        
    }
    if(sum==0){
        printf("prime number\n");
    }
    else{
        printf("not prime\n");
        
    }
    for(j=2;j<100;j++){
        for(k=2;k<j;k++){
            if(j%k==0){
                sum1=sum1+1;
            }
            if(sum1!=0){
                printf("%d\n",j);
                break;
                 
            }
            
        }
        
        
    }
    return 0;


}


