main(){

char z,a,b,c;

   printf("Enter a character: ");
     scanf(" %c", &z);

     if( ( z>='A' && z<='Z') || (z >= 'a' && z<='z'))

//EVEN THOUGH THE FOLLOWING IF STATEMENT WAS WRITTEN DURING CODE PRACTICE SESSION, THE FOLLOWING CODE IS NOT CORRECT. SO USE THE IF CODE WRITTEN ABOVE.
//if(z >= 'A' && z <= 'z' || z>= 'a' && z <= 'Z')
    printf("%c is an alphabet",z);

 else
    printf("%c is not an alphabet",z);



}
