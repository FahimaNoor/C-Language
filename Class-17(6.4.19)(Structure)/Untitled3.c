typedef struct{
int id;
float m1;
float m2;
char g1;
char g2;
}student;

char Grade(float m){
char g;
if(m>= 90 ) g='A';
else if(m>= 80) g='B';
else if(m>= 70) g='C';
else if(m>= 60) g='D';
else g='F';
return g;
}

void main(){
student s;
printf("Id: ");
scanf("%d",&s.id);

 printf("Marks in subject 1: ");
scanf("%f",&s.m1);
 printf("Marks in subject 2: ");
scanf("%f",&s.m2);

s.g1=Grade(s.m1);
printf("Grade of subject 1: %c\n",s.g1);

s.g2=Grade(s.m2);
printf("Grade of subject 2: %c",s.g2);


}
