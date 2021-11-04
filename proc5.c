//proc5
#include <stdio.h>
#include <math.h>

void rectps(int a, int b)
{
int area, perimetr;

perimetr= (a+b)*2;
area= a * b;

printf("The area of square is %d\n", area);
printf("The perimetr of square is %d\n", perimetr);
}
 
int main(){
int a, b, x1=2, y1=2, x2=8, y2=8;

a= y2-y1;
b= x2-x1;

rectps(a, b);

return 0;
}


