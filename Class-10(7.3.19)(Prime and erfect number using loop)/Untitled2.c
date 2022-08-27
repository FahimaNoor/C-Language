main(){

int n,i,j,c=0,sum=0,s=0;

printf("Enter n:");
scanf("%d",&n);

for(j=1;j<=n;j++)
{
 for(i=1;i<j;i++){
  if(n%i==0){
           sum=sum+i;
           c++;}

}
if(c==sum){
s++;
sum=0;
c++;
}
}

printf("%d are perfect number",c);


}
