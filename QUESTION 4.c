#include <stdio.h>
#include <stdlib.h>

int main(){
  int array[5] = {2,3,4,5,6,1};
  int *ptr = &array;
  int search;
  printf("Enter the Search Value:");
  scanf("%d",&search);
  for(int i=0; i<=5; i++){
    if(ptr[i] == search){
        printf("The search value %d is found at index:%d",search,i);}}}
