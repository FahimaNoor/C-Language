#include <stdio.h>
int isPalindrome(int);
int rev(int);

int isPalindrome(int n){
int c;
c=rev(n);
if(c==n) printf("Palindrome");
else printf("Not Palindrome");
}

/*
int rev(int N){
    int s,first_digit,second_digit,third_digit,fourth_digit;  //this can be used,ut this is much bigger and only works for 4 digits.
first_digit=N%10;
s=first_digit*1000;
N=N/10;

second_digit=N%10;
s=second_digit*100+s;
N=N/10;

third_digit=N%10;
s=third_digit*10+s;
N/10;

fourth_digit=N/10;
s=fourth_digit*1+s;
printf("Reverse= %d\n",s);

return s;
}
*/
int rev(int N){    //this works for any number of digits
int r,sum=0;
while(N!=0){
r=N%10;
N=N/10;
sum=sum*10+r;
}

return sum;
}

main(){
    int a,c,e;
printf("Enter a digit: ");
scanf("%d",&a);

e=isPalindrome(a);
}
