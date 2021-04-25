#include <stdio.h>
#include <stdlib.h>

//this version is more modified version of the version-1.
//This version makes more sense to me on how I can control the input inside the dynamic array, without worrying about crossing the limit. Might make the code more slow though
///creating dynamic array
int* darr;
size_t darrSize=2;
int c=1;  ///increments till the size of the array

int main(int argc,char *argv[]){
    darr = calloc(darrSize, sizeof(int));

///darr is a dynamically allocated array.
///Now to use it make sure to increment the size to store more values inside the array

    if(c==darrSize){
    darrSize *=2;
    darr=realloc(darr, darrSize*sizeof(int));
    }

    ///every time you store value inside the dynamic array, you need to increment it as well.
    darr[0]=0

    ///inserting elements in dynamic array with checking
    if(c==darrSize){
    darrSize *=2;
    darr=realloc(darr, darrSize*sizeof(int));
    }
    scanf("%d",darr[c]);
    ///inserting elements inside the dynamic array with checking


free(darr);
}
