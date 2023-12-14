#include <stdio.h>
#include <stdlib.h>

int main(){
    char string[20];
    char *ptr = &string;
    printf("Enter the string:");
    scanf("%s",&string);
    int Length = strlen(ptr);
    printf("The Reverse String is:");
    for(int i=Length; i>=0; i--){
        printf("%c",ptr[i]);}}
