main(){

int x,n,i,t;
float p=1.00;

printf("Enter x: ");
scanf("%d",&x);
printf("Enter n: ");
scanf("%d",&n);



if( n > 0 ){
for( i=1; i<=n ; i++){
t = x;
p = p*t;

                     }
}

else{
    n= -1*n;
    for (i=1; i<=n ; i++){
     t = x;
     p = p*1/t;
                         }

}

printf("Result %f",p);






}
