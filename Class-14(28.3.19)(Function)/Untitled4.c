int SUM(int n){
int a,sum=0;
while(n!=0){
a=n%10;
n=n/10;
sum=a+sum;
}

printf("Output: %d",sum); //this line should be main as the function sum has to return a value to the main
//what is the benefit of returning function to the main if we don't use it inside main
return sum;
}




main(){

int x;
printf("Input: ");
scanf("%d",&x);

SUM(x);






}
