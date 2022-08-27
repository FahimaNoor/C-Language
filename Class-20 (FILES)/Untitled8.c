#include <stdio.h>

void main(){

FILE *p;
char name[80],name2[80],password[80],password2[80];
int i,balance=1800,length;
char c[80];
p=fopen("User_input.txt","r");

 printf("Enter Your Name: ");
  scanf("%s",name2);
  fprintf(p,"%s",name2);

  fprintf(p," ");

    printf("Password please: ");
    scanf("%s",password);
    fprintf(p,"%s",password);

    printf("%s has a balance of %d taka %s",name,balance,password);


   fclose(p);



}











