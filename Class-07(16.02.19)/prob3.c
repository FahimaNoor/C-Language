main(){

int a;

     printf("Enter an integer: ");
       scanf(" %i",&a);
printf("Is %d can be both be divisible by 5 and not divisible by 7? \n",a);
if (a%5==0 && a%7!=0)
     printf("YES");
else
     printf("NO");


}
