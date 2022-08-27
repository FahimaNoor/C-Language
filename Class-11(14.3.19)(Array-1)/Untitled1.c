main(){
 int i,n=11,mid=11/2,p,x,a[11];

 for(i=0;i<n;i++)
 {
 printf("Enter n a[%d]: ",i);
 scanf("%d",&a[i]);
 }

 if(a[mid]%2==0) printf("Even\n");
 else printf("Odd\n");

 p=a[10];
 x=a[0];
 x=p;

 printf("First element: %d\n",p);

 for(i=0;i<n;i=i+2)
 {
  printf("a[%d]=%d\n",i,a[i]);
 }

}
