typedef struct{

int x;
int y;
}Point;

void main(){
int dx1,dy1,dx2,dy2,dx3,dy3;
float PQ,QR,PR;
Point p,q,r;

printf("Enter the value of x: ");
scanf("%d",&p.x);
printf("Enter the value of y: ");
scanf("%d",&p.y);

printf("Enter the value of x: ");
scanf("%d",&q.x);
printf("Enter the value of y: ");
scanf("%d",&q.y);

printf("Enter the value of x: ");
scanf("%d",&r.x);
printf("Enter the value of y: ");
scanf("%d",&r.y);

dx1=p.x-q.x;
dy1=p.y-q.y;

PQ=sqrt(dx1*dx1+dy1*dy1);

dx2=p.x-r.x;
dy2=p.y-r.y;

PR=sqrt(dx2*dx2+dy2*dy2);

dx3=r.x-q.x;
dy3=r.y-q.y;

QR=sqrt(dx3*dx3+dy3*dy3);

printf("d1=%.2f  d2=%.2f   d3=%.2f  ",PQ,PR,QR);





}
