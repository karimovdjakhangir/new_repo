//proc6
#include <stdio.h>
#include <math.h>

void digitcountsum(int a, int b, int c)
{
int i, counter=0;
for(i = 1; i<=3; i++){
counter++;}
printf("Quantity of numbers in a row is %d\n", counter);

int sum;
sum=a+b+c;
printf("Sum of the numbers in a row is %d\n", sum);
}
 
int main(){
int a=50, b=10, c=40;

digitcountsum(a, b, c);

return 0;
}


