//proc4
#include <stdio.h>
#include <math.h>

void area(float a)
{
float a1, b1, c1;
a1=(sqrt(3) / 4) * pow(a, 2);

printf("Area of triangle is %0.0f\n", a1);
}

void perimetr(float a)
{
float a2;
a2 = pow(a, 3);
printf("Perimetr of triangle is %0.0f\n", a2);
}
 
int main(){
float a;

printf("\nPlease enter length of equaterial triangle's one side\n");
scanf("%f", &a);

area(a);
perimetr(a);
return 0;
}


