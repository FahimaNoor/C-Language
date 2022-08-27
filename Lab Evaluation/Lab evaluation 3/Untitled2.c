main(){

int n,i;
float t,s=0,d=0;

printf("Enter n: ");
scanf("%d",&n);

for(i=1;i<=n;i++){
t=1.0/i;
if(i%2==0) s=s-t;
else s=s+t;
}

printf("Summation is: %.5f",s);


}
