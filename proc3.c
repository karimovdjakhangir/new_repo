//proc3
#include <stdio.h>
#include <math.h>

void amean(float A, float B, float C, float D)
{
float a1, b1, c1;
a1=(A + B) / 2;
b1=(A + C) / 2;
c1=(A + D) / 2;
printf("Arithmetic mean of %0.0f and %0.0f is =%0.1f\n", A, B, a1);
printf("Arithmetic mean of %0.0f and %0.0f is =%0.1f\n", A, C, b1);
printf("Arithmetic mean of %0.0f and %0.0f is =%0.1f\n", A, D, c1);
}

void gmean(float A, float B, float C, float D)
{
float a2, b2, c2;
a2 =sqrt(A * B);
b2=sqrt(A * C);
c2=sqrt(A * D);
printf("Geometric mean of %0.0f and %0.0f is =%0.1f\n", A, B, a2);
printf("Geometric mean of %0.0f and %0.0f is =%0.1f\n", A, C, b2);
printf("Geometric mean of %0.0f and %0.0f is =%0.1f\n", A, D, c2);
}

 
int main(){
float A, B, C, D;

printf("\nPlease enter number for A\n");
scanf("%f", &A);

printf("Please enter number for B\n");
scanf("%f", &B);

printf("Please enter number for C\n");
scanf("%f", &C);

printf("Please enter number for D\n");
scanf("%f", &D);

amean(A, B, C, D);
gmean(A, B, C, D);
return 0;
}


