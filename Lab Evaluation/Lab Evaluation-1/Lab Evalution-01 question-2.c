main(){

int a,b,c,d,e,f,g,x,sum;
printf("Input value: "); //1575
scanf("%d", &x);

  a= x / 100;
  b= x % 100;
  c= b / 50;
  d= b % 50;
  e= d /20;
  f = d % 20;
  g = f / 1;

  sum = a+c+e+g;
  printf("The total number of notes: %d\n",sum);
  printf("100= %d\n",a);
  printf("50= %d\n",c);
  printf("20= %d\n",e);
  printf("1= %d",g);












}
