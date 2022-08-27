int factorial(int n){
int p=1,i;
for(i=1;i<=n;i++){
p=p*i;
}
printf("Output: %d",p);
return p;

}

main(){
int x;
printf("Input: ");
scanf("%d",&x);

factorial(x);

}
