main(){

int a=50,b=0;

int *a_p=&a,*b_p=&b;


printf("a=%d b=%d a_p=%d   b_p=%d  \n\n",a,b,a_p,b_p);

b=a+*b_p;


printf("a=%d b=%d a_p=%d   b_p=%d  \n\n",a,b,a_p,b_p);
a_p=b_p;


printf("a=%d b=%d a_p=%d   b_p=%d  \n\n",a,b,a_p,b_p);
a=(*a_p)*(*b_p);


printf("a=%d b=%d a_p=%d   b_p=%d %d \n\n",a,b,a_p,b_p,*a_p);
*b_p=a/b;


printf("a=%d b=%d a_p=%d   b_p=%d  %d \n\n",a,b,a_p,b_p,*b_p);
*a_p=a%b;

printf("a=%d b=%d a_p=%d   b_p=%d  \n\n",a,b,a_p,b_p);










}
