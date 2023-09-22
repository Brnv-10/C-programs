 #include<stdio.h>
 #include<math.h>
 int main()
 {
    int a,b,c,max ;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    max=a>b && a>c? :(b>c ? b>a);
    printf("largest number is %d\n",max);
    return 1;
 }