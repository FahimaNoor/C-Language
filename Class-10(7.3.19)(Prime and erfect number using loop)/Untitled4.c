main(){
int i,n,x=2,c1=0,c2=0;
printf("The first 100 prime numbers are: \n");
while(c1<100){

    for(i=1;i<=x;i++){

        if(x%i==0){ c2++;}
    }
    if(c2==2){
        printf("%d\n",x);
        c1++;

    }
    x++;
    c2=0;
}

}
