main(){
int r,c,i,j;

printf("Row: ");
scanf("%d",&r);

printf("Column: ");
scanf("%d",&c);

int a[r][c],b[r][c],d[r][c];

 printf("Enter first array elements: \n");
for(i=0;i<r;i++){
  for(j=0;j<c;j++){
     /*printf("Enter the value of a[%d][%d]: ",i,j);*/
     scanf("%d",&a[i][j]);

  }
 }
 printf("Enter second array elements: \n");
for(i=0;i<r;i++){
  for(j=0;j<c;j++){
     /*printf("Enter the value of a[%d][%d]: ",i,j);*/
     scanf("%d",&b[i][j]);

  }
 }

printf("First array:\n");
 for(i=0;i<r;i++){
  for(j=0;j<c;j++){
    printf("%3d ",a[i][j]);
  }
  printf("\n");
 }

 printf("Second array:\n");
 for(i=0;i<r;i++){
  for(j=0;j<c;j++){
    printf("%d ",b[i][j]);
  }
  printf("\n");
 }


 for(i=0;i<r;i++){
  for(j=0;j<c;j++){
    d[i][j]= a[i][j]+b[i][j];
  }
 }


printf("sum: \n");
 for(i=0;i<r;i++){
  for(j=0;j<c;j++){
    printf("%3d",d[i][j]);
  }
  printf("\n");
 }






}
