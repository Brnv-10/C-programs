#include<stdio.h>
int main(int argc, char *argv[])
{
    int i=1,smallest=argv[1];
    for(i=1;i<argc;i++){
        if(smallest>argv[i]){
            smallest=argv[i];
        }
    i++;
    }
printf("smallestno is %d",smallest);
return 1;

    
   
}