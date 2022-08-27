main(){
int a,b,c,d,e, min;
   printf("Give three digit: ");
    scanf("%d", &a);

    b= a /10;
    c= a%10;
    d= b/10;
    e= b %10;

if( d < e )
min = d;

else
 min = e;
if( c < min )
min = c;

printf(" The Minimum digit is %d", min);

}



