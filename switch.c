#include<stdio.h>
int main()
{
    int n;
    printf("enter your input");
    scanf("%d",&n);


    switch (n)
    {
    case 1:
        printf("the day is monday");
        break;
    case 2:
        printf("the day is tuesday");
        break;
    case 3:
        printf("the day is wednesday");
        break;
    case 4:
        printf("the day is thrusday");
        break;
    case 5:
        printf("the day is friday");
        break;
    case 6:
        printf("the day is saturday");
        break;
    case 7:
        printf("the day is sunday");
        break;
    default:
        printf("your input must be between 0-7");
    
    }
    return 0;
}

