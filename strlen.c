#include<stdio.h>
#include<stdlib.h>

int main(){
    char str[100];
    int length=0;

    printf("Enter any string value.\n");
    gets(str);

    while (str[length]!='\0')
    {
        length++;
    }
    
    printf("%d is length of the string.\n",length);
    return 0;
}