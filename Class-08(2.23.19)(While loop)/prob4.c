main(){

float s,n,x;
printf("Enter a number: ");
scanf("%f",&n);

s=0;
x=1;

while( x <= n ){
        s = s +1/x;
        x++;

}
// s = 1+ 1/2+ 1/3+ 1/4 + 1/n;

printf("%f", s);


}
