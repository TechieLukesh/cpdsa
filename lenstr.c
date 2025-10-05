#include<stdio.h>

int main(){
    char str[100];
    printf("Enter the string.\n");
    gets(str);

    int length=0;
    while(str[length]!='\0'){
        length++;
    }

    printf("%d",length);
    return 0;
}