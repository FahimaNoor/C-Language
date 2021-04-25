#include <stdio.h>
#include <stdlib.h>

///creating dynamic array
int* darr;
size_t darrSize=2;
int i;

int main(int argc,char *argv[]){
    darr = calloc(darrSize, sizeof(int));
    if(darr==NULL){
        fprintf(stderr,"Array not Allocated");
        return 1;
    }
    darrSize*=2;
    if(darr==NULL){
        fprintf(stderr,"Array not reallocated");
        return 1;
    }
    darr=realloc(darr, darrSize*sizeof(int));

    for(i=0;i<darrSize;i++){
    scanf("%d",&darr[i]);
    }
    for(i=0;i<darrSize;i++){
        printf("ptr[%d]=%d",i,darr[i]);
    }
    getch();

printf("Hello");


free(darr);
}
