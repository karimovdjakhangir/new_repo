//proc7

#include <stdio.h>  

void reverse(int a, int b, int c)
{
    printf("Reverse order of %d %d %d is \n", a, b, c);
    printf("                 %d %d %d\n", c, b, a);
}

int main(){
int a = 5, b = 2, c = 8;
reverse(a, b, c);
    return 0;
}