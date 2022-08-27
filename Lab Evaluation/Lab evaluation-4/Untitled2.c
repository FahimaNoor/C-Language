#include<stdio.h>
int numberOfM(char t[]);

int numberOfM(char t[]){
int c=0,i;

for(i=0;t[i]!=0;i++){
t[i]=tolower(t[i]);
if(t[i]=='m') c++;
}
return c;
}

void main(){
int b;
char a[80];
printf("Input: ");
gets(a);

b=numberOfM(a);
if(b>0)  printf("%d times",b);
else printf("NOT FOUND");
}
