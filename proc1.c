//proc1
#include <stdio.h>
#include <math.h>
void PowerA3(int A, int B, double C, double D, double E)
{
int a1, b1;
double c1, d1, e1;

a1=pow(A, 3);
b1=pow(B, 3);
c1=pow(C, 3);
d1=pow(D, 3);
e1=pow(E, 3);
printf("A^3=%d\nB^3=%d\nC^3=%lf\nD^3=%lf\nE^3=%lf", a1, b1, c1, d1, e1);
}

int main(){
int A, B;
double C, D, E;

printf("\nPlease enter number for A\n");
scanf("%d", &A);

printf("Please enter number for B\n");
scanf("%d", &B);

printf("Please enter number for C\n");
scanf("%lf", &C);

printf("Please enter number for D\n");
scanf("%lf", &D);

printf("Please enter number for E\n");
scanf("%lf", &E);

PowerA3(A, B, C, D, E);
return 0;
}


