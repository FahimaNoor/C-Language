#include <stdio.h>

main(){
char a[80];
FILE *p;

p =fopen("Tutorial.txt","r");


//printf("Enter a string: ");
//gets(a);
//fprintf(p,"%s",a);
// reads text until newline


//fscanf(p,"%s",a); alternative to line 18 but prints only one the first word instead of full string.
// reads text until newline
    fscanf(p,"%[^\n]", a); //prints everything written on line
printf("%s",a);


fclose(p);



}
