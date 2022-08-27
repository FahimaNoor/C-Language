main(){

    int a,n,sum=0,r;

    printf("Enter a number: ");
    scanf("%d",&n);

   do{
        r= n%10;
        n=n/10;
        sum=sum+r;
   }while(n>0);
        printf("The sum of the digits is %d",sum);

    }


