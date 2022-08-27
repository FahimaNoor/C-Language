int powerOfTWO(int n){
int i,p=1;
for(i=1;i<=n;i++){
p=2*p;

}
printf("Output: %d",p);
return p;
}

main(){
int x;
printf("Input: ");
scanf("%d",&x);

powerOfTWO(x);
}
