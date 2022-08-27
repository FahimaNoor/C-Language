main(){


int a,b,c,d,e,f,g,h,i,j;
printf("Give a five digit number input: ");
scanf("%d", &a);

 b = a / 10;
 f=a%10;

 c=b/10;
 g=b%10;

 d=c/10;
 h= c%10;

 e= d/10;
 i= d%10;

 j = f +i+h+g+e;
 printf("The sum of the five digit number is:%d",j);



}
