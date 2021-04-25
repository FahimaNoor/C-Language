#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
///creating dynamic array

int main(){
    int size=2;
    int *ptr;
    int i;
    ptr=(int*)malloc(size*sizeof(int));
    printf("Enter:");
    for(i=0;i<size;i++){
    scanf("%d",&ptr[i]);
    }
    for(i=0;i<size;i++){
        printf("ptr[%d]=%d",i,ptr[i]);
    }
    getch();


free(ptr);
}
