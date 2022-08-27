

typedef struct{
int x;
int y;
}Point;

double calDist(Point p, Point q){
double PQ;
int dx1,dy1;

dx1=p.x-q.x;
dy1=p.y-q.y;

PQ=sqrt(dx1*dx1+dy1*dy1); //sqrt always give double
return PQ;
}

void main(){
Point p,q ;
double a;
printf("Enter the value of x: ");
scanf("%d",&p.x);
printf("Enter the value of y: ");
scanf("%d",&p.y);

printf("Enter the value of x: ");
scanf("%d",&q.x);
printf("Enter the value of y: ");
scanf("%d",&q.y);


a=calDist(p, q);

printf("PQ=%lf",a);






}
