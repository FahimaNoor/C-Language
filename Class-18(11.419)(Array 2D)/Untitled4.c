main(){
int N,i,j;
printf("Enter n: ");
scanf("%d",&N);
int a[N][N];
 for(i=0;i<N;i++){
  for(j=0;j<N;j++){
     if(i+j==N-1)
     {
      a[i][j]=1;
     }
     else a[i][j]=0;
  }
 }

 for(i=0;i<N;i++){
  for(j=0;j<N;j++){
    printf("%d ",a[i][j]);
  }
  printf("\n");
 }




}
