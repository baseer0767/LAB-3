#include <stdio.h>
#include <stdlib.h>

 int main () {
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    int *ptr1 = &a;
    int *ptr2 = &b;
    int *temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("The value of a=%d\n",*ptr1);
    printf("The value of b=%d\n",*ptr2);}
