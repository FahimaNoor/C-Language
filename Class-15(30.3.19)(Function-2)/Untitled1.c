int GCD(int a, int b){
int i,min,r;

if(a<b) min=a;
else min=b;

 for(i=1;i<=min;i++){
   if((a%i==0)&&(b%i==0))
   {
    r=i;
   }
 }
 return r;
}

main(){
int n,m,o,r,s;
printf("Enter first value: ");
scanf("%d",&n);
printf("Enter second value:");
scanf("%d",&m);
printf("Enter second value:");
scanf("%d",&o);

r = GCD(n,m);
s = GCD(r,o);
printf("The GCD is %d",s);

}
