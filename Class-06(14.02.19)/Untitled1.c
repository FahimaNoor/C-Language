main(){
int a;
float d,bill;
     printf("Enter purchase amount: ");
       scanf(" %d", &a);

   if( a <= 2000)
              {d = a*0.04;
               bill = a - d;
              }

   else if( a <= 7000 )
              {d = 2000*0.04 + (a - 2000)*0.08;
               bill = a - d;
              }
   else
    { d = 2000*0.04 + 5000*0.08 + (a-7000)*0.15;
      bill = a-d;
    }
      printf("Your bill is: %.2f Taka", bill);















}
