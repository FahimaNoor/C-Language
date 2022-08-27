main(){

int n=5,i,s=0,avg,a[5],c=0,p=0;

printf("Enter array elements: ");

for(i=0;i<n;i++){
scanf("%d%*c",&a[i]);

s=s+a[i];
}
avg=s/5;

printf("Average is %d\n",avg);


for(i=0;i<n;i++)
{
    if(a[i]>avg) c++;
    else p++;
}
  printf("%d of them got above average\n",c);
  printf("%d of them got below average\n",p);
}

