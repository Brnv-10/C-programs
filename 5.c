/*Write a function that checks whether a given string is Palindrome or not. Use this function to
find whether the string entered by user is Palindrome or not.*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    int i=0;
    int j=strlen(str)-1;
    printf("enter the string");
    scanf("%s",str);
    while(j>i){
        if(str[i++]!=str[j--])
            printf("%s is not a palindrome",str);
            return 0;
    printf("%s is a palindrome",str);
    return 0;
    }
}