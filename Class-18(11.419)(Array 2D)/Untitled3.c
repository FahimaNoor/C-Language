main(){
int i,j,sum=0;

int a[3][3];


 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
     printf("Enter the value of a[%d][%d]: ",i,j);
     scanf("%d",&a[i][j]);

  }
 }

 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
     if(i==j)
     {
      sum=sum+a[i][j];
     }

  }
 }

printf("Output: %d",sum);




}
