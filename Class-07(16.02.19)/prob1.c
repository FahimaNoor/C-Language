
main(){
char a;
int b,c;
    printf("Enter operator: ");
     scanf("%c",&a);
    printf("Enter 1st operand: ");
     scanf("%i",&b);
    printf("Enter 2nd operand: ");
     scanf("%i",&c);


 switch(a){
  case '+' : printf("%i",b+c);
             break;
  case '-' : printf("%i",b-c);
             break;
  case '*' : printf("%i",b*c);
             break;
  case '/' : printf("%i",b/c);
             break;
          }

}
