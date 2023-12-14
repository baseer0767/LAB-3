#include <stdio.h>
#include <stdlib.h>

int main(){
    int matrix1[3][3] = {{1,2,3},{4,5,6},{3,2,1}};
    int matrix2[3][3] = {{7,8,9},{10,11,12},{4,2,1}};
    int matrix3 [2][3];
    int *ptr1 = &matrix1;
    int *ptr2 = &matrix2;
    int *ptr3 = &matrix3;
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            *ptr3 = *ptr1 + *ptr2;
            printf("%2d ",*ptr3);
            ptr1++;
            ptr2++;
            ptr3++;}
        printf("\n");}}
