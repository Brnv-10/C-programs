#include<stdio.h>
int main(){
    int i,j,k;
    int n;
    printf("enter number of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==i){
                printf("*");
            }
            else{
                printf("\n");
            }
        }
    printf("\n");
    }
    return 0;
}