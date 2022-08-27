main(){

int a,b,c,d;
   printf("Enter a: ");
    scanf(" %d", &a);

   printf("Enter b: ");
    scanf(" %d", &b);

   printf("Enter c: ");
    scanf(" %d", &c);

d=a;
a=b;
b=c;
c=d;

printf("After interchange:\n");
printf(" a = %d\n", b);
printf(" b = %d\n", d);
printf(" c = %d\n", a);







}
