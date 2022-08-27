//*Write down a program that will take two integers as input and will show the results of *//
//*addition, multiplication, division and modulus. The output should exactly match like below:*//
//* Sample Input/Output:*//
//*Enter an Integer: 46*//
//*Enter another integer: 34*//
//*46 PLUS 34 EQUALS 80*//
//*46 - 34 = 12*//
//*The result of multiplication is 1564*//
//*46 mod 34 = 12*//
main(){

int a, b, c, d, e, f;
printf("Enter an integer: ");
scanf(" %d", &a);

printf("Enter another integer: ");
scanf(" %d", &b); //* make sure to give the & sign for program to run smoothly*//

c = a + b;
printf(" %d PLUS %d EQUALS %d\n", a,b,c );

d = a - b;
printf("%d - %d = %d\n", a, b, d);

e = a*b;
printf("The result iof multiplication is %d\n",e);

f = a % b;
printf("%d mod %d = %d",a,b,f);

}
