main(){

float Pay,a,extra; // a=300, bill should be 165 taka

printf("Enter units of consumption: ");
scanf(" %f", &a);

if( a <= 200)
                Pay = a*0.5 ;


else if (a >200 && a <= 400){
                 extra = (a-200)*0.65;
                 Pay =  (200*0.5)+extra;
}
else if (a >400 && a <= 600) {
                 extra=(a-400)*0.8;
                 Pay = ( (200*0.5) + (200*0.65) + extra );
}

else {          extra= (a-600)*1;
                Pay = ( (200*0.5) + (200*0.65) + (200*0.8) + extra  );
 }
printf("Your bill is: %.f Taka",Pay);





}
