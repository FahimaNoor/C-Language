int rev(int N){
int num,num1,num2,c,b,i,a,t,p,q,z,s;

c=N%10;
num=c*1000;
b=N/10;

p= b%10;
num=num+(p*100);
q=N/10;

z=q%10;
num=num+(z*10);
s=N/10;

t=s%10;
num=num+(t*1);
a=N/10;


if(num==N) return b;

}

int ispalindrome(int n){
 int a,r;
 a=rev(n);
 if(a==n) r=1 ;
 return r;
}
main(){
int a[80],x,b,l,m,r;
printf("Enter a number: ");
scanf("%d",&x);
m=rev(x);
printf("Reverse: %d",m);

b=ispalindrome(x);
if(b==1) printf("Palindrome");

}
