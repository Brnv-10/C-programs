#include<stdio.h>
#include<math.h>
int main()
{
    int n=3;
    int i,j,k;
    for(i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<n)
            printf(" ");
            else
            printf("*");
        }
    }
    for(int k=i;k<1;k--)
    {
        printf("*");
    }
    printf("\n");
}