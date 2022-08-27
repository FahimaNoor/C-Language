typedef struct{
  int x;
  int y;

}Point;


float calDist(Point a ,Point b){
int dx,dy;
float dis;

dx=a.x-b.x;
dy=a.y-b.y;

  dis=sqrt(dx*dx+dy*dy);

return dis;
}


float largestDist(Point e,Point f, Point g){
float p,v,r,max=0;
p=calDist(e,f);
v=calDist(f,g);
r=calDist(e,g);

if(p >= v && p >= r) max=p;
else if(r >= v && r >= p) max=r;
else if(v >= p && v >= r) max=v;
 return max;
}

void main(){

  Point m,q,t;
  float l;

  printf("Enter the value of x1: ");
      scanf("%d",&m.x);
  printf("Enter the value of y1: ");
      scanf("%d",&m.y);

  printf("Enter the value of x2: ");
     scanf("%d",&q.x);
  printf("Enter the value of y2: ");
     scanf("%d",&q.y);

  printf("Enter the value of x3: ");
     scanf("%d",&t.x);
  printf("Enter the value of y3: ");
     scanf("%d",&t.y);

  l=largestDist(m,q,t);

  printf("The value of Largest Distance is: %f",l);

  }
