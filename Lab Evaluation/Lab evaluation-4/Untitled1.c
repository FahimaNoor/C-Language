#include<stdio.h>
int powerOfTHREE(int n){
int p=1,i;
for(i=1;i<=n;i++){
p=3*p;
}
return p;
}


void main(){
int a,b;

printf("Enter the power of n: ");
scanf("%d",&a);

b=powerOfTHREE(a);

printf("%d",b);

}
