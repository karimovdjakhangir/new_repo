//proc2
#include <stdio.h>
#include <math.h>

void PowerA234(float A, float B, float C)
{
float a1, b1, c1, i;
for (i=2; i<=4; i++)
{
a1=pow(A, i);
b1=pow(B, i);
c1=pow(C, i);
printf("%0.0f power of %0.0f is =%0.0f\n", i, A, a1);
printf("%0.0f power of %0.0f is =%0.0f\n", i, B, b1);
printf("%0.0f power of %0.0f is =%0.0f\n", i, C, c1);
}
}

int main(){
float A, B, C;

printf("\nPlease enter number for A\n");
scanf("%f", &A);

printf("Please enter number for B\n");
scanf("%f", &B);

printf("Please enter number for C\n");
scanf("%f", &C);

PowerA234(A, B, C);
return 0;
}


