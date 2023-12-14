#include <stdio.h>
#include <stdlib.h>

int main () {
    int size_of_array;
    printf("Enter the size of an array:");
    scanf("%d",&size_of_array);
    int var[size_of_array];
    int *ptr = var;
    for(int i=0; i<size_of_array; i++){
    printf("Enter an Array element %d:",i+1);
    scanf("%d",&var[i]);}
    printf("The elements of arrays are:");
    for (int i=0; i<size_of_array; i++){
        printf("%d ",*(ptr+i));}}
