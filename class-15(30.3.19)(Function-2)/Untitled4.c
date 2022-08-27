int numberOfVowels(char t[]){
int n,v=0,i,c;
int len = strlen(t);
 for(i=0;i<len;i++){

 c=tolower(t[i]);
 if((c=='a')||(c=='e') ||(c=='i')||(c=='o')||(c=='u')) v++;

 }
return v;
}




main(){
int a[80],r;
printf("Input: ");
gets(a);

r=numberOfVowels(a);
printf("%d vowels",r);

}
