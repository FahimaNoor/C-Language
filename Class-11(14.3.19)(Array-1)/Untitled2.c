main(){
 int i,n=5,c=0,x;
 char a[5];
 for(i=0;i<n;i++)
 {
 printf("Enter Character,a[%d]: ",i);
  scanf("%c%*c",&a[i]);
}
printf("%d\n",a[1]);
  printf("%d\n",a[2]);

  x=a[4];
  x=tolower(a[4]);
 switch (x){
   case 'a' :
   case 'e' :
   case 'i' :
   case 'o' :
   case 'u' : printf("Vowel\n"); break;
   default : printf("Consonant\n");
  }
  printf("a[2]=%d\n",a[2]);
  printf("a[0]=%d\n",a[0]);
  printf("a[1]=%d\n",a[1]);
  printf("a[4]=%d\n",a[4]);
  printf("a[3]=%d\n",a[3]);
}

