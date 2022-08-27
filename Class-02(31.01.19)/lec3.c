main(){
int a, b, c, d, e, f, g, h, i, j;
printf("Enter first person's height:\n");
printf("Feet: ");
scanf(" %d", &a);
printf("Inch: ");
scanf(" %d", &b);

e = a*12 + b;


printf("Enter second person's height:\n");
printf("Feet: ");
scanf(" %d", &c);
printf("Inch: ");
scanf(" %d", &d);

f = c*12 + d;

g = e - f;
h = g / 12;
i = g % 12;
printf("Height difference %d feet %d inch", h, i);


}
