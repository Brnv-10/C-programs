#include<stdio.h>
#include<math.h>
int main()
{
    int n=8,j,i;
    for(j=1;j<=n;j++)
    {
        if(j==1||j==n)
        {
            for(i=1;i<=n;i++)
            printf("#");
            printf("\n");
        }
        else{
            for(i=1;i<=n;i++)
            if(i==1||i==n)
            printf("#");
            else printf(" ");
            printf("\n");
        }
    }
}