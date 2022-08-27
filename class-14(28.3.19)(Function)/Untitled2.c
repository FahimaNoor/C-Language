SUM(x,y){
int r=0;
r=x+y;
return r;
}

main(){
int a,b,c,d,e,f,g;
printf("Enter digit: ");
scanf("%d",&a);
printf("Enter digit: ");
scanf("%d",&b);
printf("Enter digit: ");
scanf("%d",&c);
printf("Enter digit: ");
scanf("%d",&d);
e=SUM(a,b);
f=SUM(c,d);
g=SUM(e,f);
printf("sum: %d+%d+%d+%d=%d",a,b,c,d,g);


}
