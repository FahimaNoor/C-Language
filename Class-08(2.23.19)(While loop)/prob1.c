main(){
int n,x; // enter 26 and the output will be 26 13
printf("Enter a number: ");
scanf("%d",&n);
x=n;
while( x >= 1){
  if(x%13==0) {
    printf("%d\n", x);}
    x--;

}
/*or while( x-- ){
  if(x%13==0) {
    printf("%d\n", x);}
    ;*/








}
