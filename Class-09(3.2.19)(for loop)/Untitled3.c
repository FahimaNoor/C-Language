main(){

int N,sum=0,i,t;
printf("Enter N: ");
scanf("%d",&N);


for(i=1; i <= N ; i++)
{
   if((N%i == 0) && (i%2 != 0) )
  {

   sum=sum+i;
  }
}
printf("%d",sum);


}
