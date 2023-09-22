#include<stdio.h>
struct matrix{
    int arr[10][10];
    int r;
    int c;
};
typedef struct matrix Matrix;
void input(matrix *p)
{
printf("enter dimention of the matrix\n");
scanf("%d%d",&p->r,&p->c);
printf("enter elements of the matrix");
for(i=0;i<p->r;i++)
   for(j=0;j<p->c;j++)
   scanf("%d",&p->arr[i][j]);
}
Matrix add(Matrix a,Matrix b)
{
    int i,int j;
    Matrix t;
    if(a.r!=b.r && a.c!=b.c)
    {
        t.r=t.c=0;
        return t;
    }
    else
    {
        t.r=a.r;
        t.c=a.c;
        for()

    }
}
int main()
{
    
}