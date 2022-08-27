
int numberOfVowels(char t[]){
int i,c=0;
for(i=0;t[i]!='\0';i++){
t[i]=tolower(t[i]);
if((t[i]=='a') ||(t[i]=='e') || (t[i]=='i') || (t[i]=='o') || (t[i]=='u')) c++;

}

return c;
}

main(){
int a[80],b;
printf("Enter a string: ");
gets(a);

b=numberOfVowels(a);
printf("output: %d",b);


}
