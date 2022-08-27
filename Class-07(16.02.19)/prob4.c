main(){
   float a,b,c,z,w,q,Root_1,Root_2;

printf("Enter the Coefficients:\n ");
    printf("a: ");
      scanf("%f",&a);
    printf("b: ");
      scanf("%f",&b);
    printf("c: ");
      scanf("%f",&c);

z = (b*b - 4*a*c);

    if(z < 0)
        printf("The equation is Complex");

    else {
        w = -b + sqrt(z);
        Root_1= w / (2*a);
        printf("Root_1: %.2f\n",Root_1);

        q = -b - sqrt(z);
        Root_2=q / (2*a);
        printf("Root_2: %.2f\n",Root_2);
        }
}
