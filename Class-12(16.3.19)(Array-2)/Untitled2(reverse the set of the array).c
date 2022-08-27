//reverse the set of the array

main(){

int i,n,t;

printf("Enter N: ");
scanf("%d",&n);
int a[n];

for(i=0 ; i<n ; i++ ){
printf("Enter a [%d]: ",i);
scanf("%d",&a[i]);
}
t= a[n-1];  //shifting array from left to right
for( i=n-1 ; i>0 ; i--){
a[i] = a[i-1];
}
a[0]=t;


for(i=0;i<n;i++){
printf("a[%d]= %d\n",i,a[i]);
}
}
