int perfect(int n){
int s=0,i,r;
 for(i=1;i<n;i++){
  r=0;
  if(n%i==0) s=i+s;
  }
  if(s==n) r=1;
  return r;
}

main(){
int a,x,i,s,r;
printf("Enter input: ");
scanf("%d",&x);
   for(i=2;i<=x;i++)
    {
    a=perfect(i);
    if(a==1) printf("%d\n",i);
    }

}
