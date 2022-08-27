void printCircle(int *radius){
float *area,*cir;

*area=(*radius)*(*radius)*(22/7);
*cir= 2*(22/7)*(*radius);

}



main(){
int r;
float cir,area;

printf("Enter the radius: ");
scanf("%d",&r);

printCircle(&r);


printf("Area: %f",area);
printf("Cir: %f",cir);



}
