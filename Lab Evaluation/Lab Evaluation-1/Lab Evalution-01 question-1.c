main(){


int basic_salary,dearness_allowance,house_rent,tax,sum;

printf("The Gross Salary of the month: ");
scanf("%d", &basic_salary);
dearness_allowance = basic_salary*4*0.1;
house_rent = basic_salary*2*0.1;
tax = basic_salary*0.1;

sum = basic_salary + dearness_allowance + house_rent - tax;

printf("Salary Of the month: %d",sum);












}
