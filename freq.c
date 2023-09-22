#include<stdio.h>
#include<math.h>
int main()
{
    int num,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0,n0=0;
    printf("enter the number");
    scanf("%d",&num);
    while(num!=0)
    {
    num=num%10 ;
    switch (num)
    {
    case 1:
     num==1;
     n1++ ;
     break;
    case 2:
     num==2;
     n2++ ;
     break;
    case 3:
     num==3;
     n3++ ;
     break;
    case 4:
     num==4;
     n4++ ;
     break;
    case 5:
     num==5;
     n5++ ;
     break;
    case 6:
     num==6;
     n6++ ;
     break;
    case 7:
     num==7;
     n7++ ;
     break;
    case 8:
     num==8;
     n8++ ;
     break;
    case 9:
     num==9;
     n9++ ;
     break;
    case 10:
     num==0;
     n0++ ;
     break;
    }
   }
printf("n1=%d\n",n1);
printf("n2=%d\n",n2);
printf("n3=%d\n",n3);
printf("n4=%d\n",n4);
printf("n5=%d\n",n5);
printf("n6=%d\n",n6);
printf("n7=%d\n",n7);
printf("n8=%d\n",n8);
printf("n9=%d\n",n9);
printf("n0=%d\n",n0);

return 0;
}

